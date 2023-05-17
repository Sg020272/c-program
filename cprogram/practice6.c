// Write a C program to input week number and print week day.
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("sunday");
    }
    else if(n==2){
         printf("Monday");

    }
    else if(n==3){
         printf("tuesday");

    }
    else if(n==4){
         printf("wednesday");

    }
    else if(n==5){
         printf("thursday");

    }
    else if(n==6){
         printf("friday");

    }
    else if(n==7){
         printf("saturday");

    }
    else {
        printf("not a week day");
    }
    return 0;
}

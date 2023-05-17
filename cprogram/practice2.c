// 	Write a C program to check whether a number is negative, positive or zero
#include<stdio.h>
int main (){
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("the number is 0");
    }
    else if (a>0){
        printf("the number is positive");
    }
    else if(a<0){
        printf("the number is negative");
    }

    return 0;
}
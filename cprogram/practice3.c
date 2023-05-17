// Write a C program to check whether a year is leap year or not
#include<stdio.h>
int main (){
    int year;
    scanf("%d",&year);
    if(year%4==0 || year%400==0){
        printf("number is leap year");
    }
    else {
        printf("not a leap year");
    }


    return 0;
}
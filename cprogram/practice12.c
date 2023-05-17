// Write a C program print total number of days in a month using switch case.
#include<stdio.h>
int main (){
    int month;
    printf("choose month(1-12)");
    scanf("%d",&month);
    switch(month){
        case 1 : printf("january\n total no. of days - 31");
        break;
        case 2 : printf("feb\n total no. of days - 31");
        break;
        default: printf("not a month");
    }
    return 0;
}
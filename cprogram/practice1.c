// 2.	Write a C program to find maximum between three numbers.
#include<stdio.h>
int main (){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c){
        printf("a is greatest number",&a);
        }
    else if (b>a&&b>c){
         printf("b is greatest number",&b);
    }
    else if (c>a&&c>b){
         printf("c is greatest number",&c);
    }

  
    return 0 ;
}
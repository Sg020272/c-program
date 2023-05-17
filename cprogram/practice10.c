// Write a C program to print multiplication table of any number
#include<stdio.h>
int main (){
    int i,n,m;
    scanf("%d",&n);
    for(i=1; i<=10; i++){
        m=n*i;
         printf("%dx%d=%d\n",n,i,m);

    }

   
    return 0;
    }
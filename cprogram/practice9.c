// Write a C program to find sum of all natural numbers between 1 to n.
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    int s = 0 ;
    for(int i=1; i<=n; i++){
        s=s+i;
      }
        printf("the sum is %d\n",s,n);

    return 0;
    }
// Write a C program to check whether a number is even or odd using switch case
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    switch(n%2){
        case 1: n%2==0; printf("no is even %d",n);
        break;
        
        default : printf("no is not even");
    }
}
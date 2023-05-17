// write a program to read the marks of 5 student . Calculate sum and average using array 
#include<stdio.h>
int main (){
    int marks[5];
    int sum = 0;
    int average;
    printf("enter the  element");
    for(int i=0;i<5;i++){
        scanf("%d",&marks[i]);
        }
    for(int i=0;i<5;i++){
        printf("%d\n",marks[i]);
          sum = sum +marks[i];
        
    }
    average = sum /5;
    printf("%d\n%d",sum,average);
    
    return 0;
    }
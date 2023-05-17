// Write a C program to check whether a number is positive, negative or zero using switch case.
#include<stdio.h>
int main (){
    int n;
    scanf("%d",&n);
    switch(n>=1){
        case 1: printf("positive");
        break;
        }
        switch (n<=1){
            case 2: printf("negative");
            break;
            }
        switch (n==0){
        case 3: printf("0 no");
        break;
            }
            return 0;

}

    
// Write a C program to check whether a character is alphabet or not.
#include<stdio.h>
int main (){
    char c;
    scanf("%c",&c);
    if (c>= 'a' && c<= 'z' || c>='A' && c<= 'Z') {
    printf("the number is alphabet");
    }
    else{
    printf("the number is not alphabet");
    }
    return 0;
}
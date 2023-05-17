// Write a C program to input any alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main (){
    char c;
    scanf("%c",&c);
    if(c=='a'|| c=='e' || c=='i' || c=='o'|| c=='u'){
        printf("character is vowel");
    }
    else {
        printf("char is consonant");
    }

    return 0;
}
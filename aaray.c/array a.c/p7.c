// palindrome number............
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int num,rev=0,n;
    scanf("%d",&num);
    num=n;
    while(num!=0){
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    if(rev==n){
        printf("Palindrome");
    }  
    else{
        printf("Not Palindrome");
    } 
    return 0;
}

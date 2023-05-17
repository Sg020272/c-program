// write a program to read an array of 10 integers and count total number of even and odd element 
#include<stdio.h>
int main (){
    int marks[10];
    int even = 0 , odd =0;
  
    for(int i=0;i<10;i++){
        scanf("%d",&marks[i]);
        }
        for(int i=0;i<10;i++){
            if (marks[i]%2==0){
                even++;
            }
            else {
                odd++;
            }
            printf("%d\n",even);
            printf("%d\n",odd);
            return 0;
        }

        }
// write a program to enter price of 3 product  & print there final cost with gst 
#include<stdio.h>
int main (){
    float product[3];
    printf("enter price of product 1");
    scanf("%f",&product[0]);

    printf("enter price of product 2");
    scanf("%f",&product[1]);

    printf("enter price of product 3");
    scanf("%f",&product[2]);
    printf("final cost : %f",product[0]+0.18*product[0]);
     printf("final cost : %f",product[1]+0.18*product[1]);
      printf("final cost : %f",product[2]+0.18*product[2]);


    return 0;
}
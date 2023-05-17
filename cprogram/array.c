// array is collection of  similar data types at continuous memory location  
// basic array syntax int (type) marks(variable) [4](size of array in square bracket)
// int marks[3], char alpha[2] , float gamma [4].
//in lang like c,c++, java 0 based indexing is done that means 1st position byte will be not 1 it will be 0
// basic syntax of taking input output in array scanf("%d",&marks[0]), printf("%d",marks[0]) for eg 
// initialization of array :- int marks[]={1,3,5}; , int marks[3]={1,2,5} both are right 
#include<stdio.h>
int main (){
    int marks[2];
    scanf("%d",&marks[0]);
      scanf("%d",&marks[1]);
      printf("phy =%d,chem = %d",marks[0],marks[1]);
    return 0;
}

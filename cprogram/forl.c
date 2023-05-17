// in for loop syntax is = for(initialisation,condition,update)
//  in for loop in initialisation means the code will start from 1 so syntax is i = 1
// in condition we will write the logic for example i<=5
// in update we will write how variable i should update itself like i=i+1
#include<stdio.h>
int main () {
    for(int i=1; i<=5;  i=i+1){
        printf("hi nigga\n");
    }
    return 0;

}
// about the increment operator
// i++ is used for (post increment )
// ++i is used for (pre increment )
// for example 
int i =1 ;
 printf("%d", i++); // first it will use then increase 
 printf("%d", i);
 int i = 1 
 printf("%d", ++i); // first it will increase then use i 
 printf("%d", i);
//  these are decrement operator 
// i++ is used for post decrement 
// --i is used for pre decrement 

 int i =1 ;
 printf("%d", i--); // first it will use then decrease
 printf("%d", i);
 int i = 1 
 printf("%d", --i); // first it will decrease then use 
 printf("%d", i);
 

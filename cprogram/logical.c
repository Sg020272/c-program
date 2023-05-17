// while using logical operator or maybe && operator both the condition should be correct  or every condition should be true
#include<stdio.h>
#include<math.h>
int main (){
    int a =  4>3 && 3>2 ;
    printf("%d",a);
    
    return 0;

}
// or operator if one condition is true then it will return true 1 if 2 condition is false then it will return false 0 
#include<stdio.h>
#include<math.h>
int main (){
    int a =  1>3 && 3>2 ;
    printf("%d",a);
    
    return 0; 

}
// ! we use not to flip the condition like we can make true condition false and false cond true for eg.
#include<stdio.h>
#include<math.h>
int main (){
    int a =  !(5>4&& 3>4) ;
    printf("%d",a);
  
    
    return 0;
}
 


//  reveals the address of memory location and it is declare by variable 
// if we store address of of memory location in variable that is called pointers but that variable too have address 
//  basic syntax - int age = 24;  int *ptr = &age; *= it is the value at address it gives the value or address memory or that variable 
// now to know the value of *ptr which is stored in that variable syntax - int ad = *ptr;
// format specifiers printf("%p",ptr); printf("%p",&ptr)- this is to print address of pointer 
#include<stdio.h>
int main (){
    int age = 20;
    int *ptr = &age;
    int address = *ptr;
     printf("%p\n", address); // to print address 
       printf("%p", &address);
    return 0;
}

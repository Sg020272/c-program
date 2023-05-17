//elseif is used where (if) first condition is false so else if is used to meet the true condition after if  (to do something if 1st is false)
#include<stdio.h>
int main (){ 
    int savings;
    printf("enter savings");
    scanf("%d",&savings);
    if(savings >= 10000){
        printf("movie and bike ride with rashika \n");
        }

        else if (savings > 5000 && savings < 10000){
        
            printf("netflix,ice cream and popcorn with rashika");
        }
        
        else {
            printf("date with rashmi");
        }
        
    return 0;
}  
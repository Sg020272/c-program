#include<stdio.h>
int main(){
    float p,c,b,m,co,per,total;
    scanf("%f%f%f%f%f" ,&p,&c,&b,&m,&co);
    total = p+c+b+m+co;
    per = total/500*100;
    printf("%f\n",per);
    if(per >= 90){
        printf("Grade A");
    }
        else if(per>=80){
            printf("Grade B");
        }
         else if(per>=70){
            printf("Grade C");
        }
         else if(per>=60){
            printf("Grade d");
        }
         else if(per>=40){
            printf("Grade E");
        }
         else if(per<40){
            printf("Grade F");
         }
         else {
         printf("not valid");
         }
 
    

    return 0;
}
// sum of number using function........
# include<stdio.h>
int sum(){
    int a,b,sum=0;
   printf("enter two number a and b: ");
   scanf("%d%d",&a,&b);
   sum=a+b;
   printf("%d",sum);
   return 0;
}
int main(){
    sum();
    printf("\n");
    sum();
    return 0;
}
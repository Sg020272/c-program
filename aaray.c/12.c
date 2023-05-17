#include<stdio.h>
int add(int p,int q){
    return p+q;
}
int main(){
    int a,b;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the secon number");
    scanf("%d",&b);
    int sum= add(a,b);
    printf("%d",sum);
    return 0;

}

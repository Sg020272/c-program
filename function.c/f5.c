// function with argument and return type...
# include<stdio.h>
int sum(int a,int b){
    int s=0;
  s=a+b;
  return s;  
}
int main(){
    int c,x,y;
    printf("enter two numbers");
    scanf("%d%d",&x,&y);
     c= sum(x,y);
     printf("%d",c);
}
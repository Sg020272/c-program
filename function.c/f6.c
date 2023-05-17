// passing array as an arguments....
# include<stdio.h>
int avg(int[],int);
void main(){
    int marks[5]={10,20,30,40,50};
    int size=sizeof(marks)/sizeof(marks[0]);
  int  average=avg(marks,size);
  printf("average=%d\n",average);
  }
  int avg(int marks1[],int size){
    int i,sum=0,average=0;
    for(i=0;i<size;i++){
        sum=sum+marks1[i];
    }
    average=sum/size;
    return average;
  }
 
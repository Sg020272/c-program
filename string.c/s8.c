 // reverse a string..................
# include<stdio.h>
# include<string.h>
int main(){
    char str[100];
    puts("enter the string:");
    gets(str);
    puts("the size is: "); // automatically puts \n bhi deta hai
    // size
    int size=0;
    int k=0;
    while(str[k]!='\0'){
        size++;
        k++;
    }
    printf("%d\n",size);
   puts("reverse is : ");
    //reversing
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    puts(str);
    return 0;
}
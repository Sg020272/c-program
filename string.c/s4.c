 // modyfying string...................
 # include<stdio.h>
int main(){
    char arr[]="hlo everyone how are you\0";
    arr[1]=99;
    int i=0;
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;

    }
    return 0;
}
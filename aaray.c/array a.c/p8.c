// transpose of a matrix...........
# include<stdio.h>
int main(){
    int r,c,i,j;
    printf("enter row number");
    scanf("%d",&r);
    printf("enter column number");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d   ",arr[j][i]);
        }
        printf("\n");
    }
return 0;
}
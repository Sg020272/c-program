// sum of individual row and column...............
 # include<stdio.h>
 int main(){
    int r,c,i,j,sr,sc;
    printf("enter row number");
    scanf("%d",&r);
    printf("enter column number");
    scanf("%d",&c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        sr=sc=0;
        for(j=0;j<c;j++){
            sr=sr+arr[i][j];
            sc=sc+arr[j][i];
        }
        printf("sr=%d\n",sr);
        printf("sc=%d\n",sc);
    }
    return 0;
 }
#include <stdio.h>

int main()
{
    int i,j;
    int space=4;
    char CH='A';
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
        
        for(j=1; j<=i; j++)
            printf("%c",CH+j-1);
        for(j=i-1; j>=1; j--)
            printf("%c",CH+j-1);
            
        printf("\n");
        space--;
    }

    return 0;
}
#include<stdio.h>

int main()
{
	int i,j,k,l,m=8,n=1;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}            
		for(k=m; k>=1; k--)            
		{
			printf(" ");
		}
			m = m-2;
		for(l=n; l>=1; l--)
		{
			printf("%d",l);
        }
  		n = n+1;
	    printf("\n");            
       }
       
       return 0; 
}
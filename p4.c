#include<stdio.h>

int main()
{
	int i,j,k;
	
	for(i=0 ; i<=4 ; i++)
	{
		for(j=4 ; j>i ; j--)
			printf(" ");

		for(k=0 ; k<=i; k++)
		{
			if(k%2==0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
    
    return 0;
}
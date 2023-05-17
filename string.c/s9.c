

#include <stdio.h>

void remove_spaces(char *buf , int len)
{
    int i=0,j=0;
    char temp[100]={0};
    
    for(i=0,j=0 ; i<len ; i++)
    {
        if(buf[i] == ' ' && buf[i]!=NULL)
        {
            for(j=i ; j<len ; j++)
            {
                buf[j] = buf[j+1];
            }
            len--;
        }
    }
}

int main()
{
    char string[100]={0};

    int i=0,len=0;
    
    printf("\nEnter your string : ");
    gets(string);
    
    len = strlen(string);
    
    remove_spaces(string , len);
    
    printf("\nNew string is : %s\n",string);
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char inp[1000];
    int i,j,k,l,m,o,n=0;
    printf("Enter the string- ");
    gets(inp);
    n=strlen(inp);
    
    j=o=-1;
    k=0;
    for(i=0;i<n;i++)
    {
        if(isdigit(inp[i])!=0)
        {
            k=(k*10)+((int)inp[i]-48);
            if(o==-1)
                o=i-1;
        }
        else
        {
            if(j==-1)
                j=i;
            else if(k>0)
            {
                for(l=1;l<=k;l++)
                {
                    for(m=j;m<=o;m++)
                        printf("%c",inp[m]);
                }
                o=-1;
                j=i;
                k=0;
            }
        }
    }
    if((j>-1)&&(o>-1)&&(k>0))
    {
        for(l=1;l<=k;l++)
        {
            for(m=j;m<=o;m++)
                printf("%c",inp[m]);
        }
    }
    getch();
    return 0;
}
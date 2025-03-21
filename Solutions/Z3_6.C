#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char inp(1000);
int i,j,k,l,m,o,n=0;

void reverse()
{
    if(i>=0)
    {
        if(inp[i]==' ')
        {
            for(k=i+1;k<=j;k++)
                printf("%c",inp[k]);
            printf(" ");
            j=-1;
        }
        else
            if(j==-1) j=i;
        i--;
        reverse();
    }
    else
    {
        if(j!=-1)
        {
            for(k=0;k<=j;k++)
                printf("%c",inp[k]);
            j=-1;
        }
    }
}

int main()
{
    printf("Enter the string- ");
    gets(inp);
    n=strlen(inp);
    i=n-1;
    j=n-1;
    
    reverse();
    getch();
    return 0;
}

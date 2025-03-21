#include <stdio.h>
#include <string.h>

char inp[1000];
int i,j,k,n,m;

void printreverse(int a,int b)
{
    int c;
    if((inp[b]==' ')||(b==0))
    {
        if(b!=0)
            c=b+1;
        else
            c=0;
        for(;c<=a;c++)
            printf("%c",inp[c]);
        if(b!=0)
        {
            printf(" ");
            printreverse(b-1,b-1);
        }
    }
    else
        printreverse(a,b-1);
}

int main()
{
    printf("Enter String-");
    gets(inp);
    n=strlen(inp);
    
    printf("\nReversed Order\n");
    printreverse(n-1,n-1);
    return 0;
}
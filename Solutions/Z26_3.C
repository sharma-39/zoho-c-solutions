#include <stdio.h>
#include <string.h>

int n;

int genbin(int a)
{
    if(numlen(a)<=n)
    {
        printnum(a);
        printnum(a+1);
        if(a>0)
            genbin(a*10);
        genbin((a+1)*10);
    }
}

int numlen(int a)
{
    int b=0;
    while(a>0)
    {
        b++;
        a/=10;
    }
    return b;
}

int printnum(int a)
{
    int c;
    if(numlen(a)<n)
    {
        for(c=1;c<=n-numlen(a);c++)
            printf("0 ");
    }
    for(c=numlen(a);c>0;c--)
    {
        printf("%d ",a/(int)pow(10,c-1));
        a%=((int)pow(10,c-1));
    }
    printf("\n");
}

int main()
{
    printf("Enter\nN Value-");
    scanf("%d",&n);
    genbin(0);
    return 0;
}
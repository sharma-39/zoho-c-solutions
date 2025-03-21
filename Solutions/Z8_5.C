#include <stdio.h>
#include <string.h>

char inp[1000];
int i,n;

void combinations(int a,int b)
{
    if(numlen(b)<=n)
    {
        int c,d;
        if(b>0)
        {
            c=b;
            for(d=numlen(b);d>0;d--)
            {
                printf("%c",inp[(c/(int)(pow(10,d-1)))-1]);
                c%=((int)(pow(10,d-1)));
            }
            printf("\n");
        }
        for(c=a;c<=n;c++)
            combinations(c+1,(b*10)+c);
    }
}

int numlen(int a)
{
    int c=0;
    while(a>0)
    {
        c++;
        a/=10;
    }
    return c;
}

int main()
{
    printf("Enter String -");
    gets(inp);
    n=strlen(inp);
    
    printf("\nCombinations\n");
    combinations(1,0);
    getch();
    return 0;
}
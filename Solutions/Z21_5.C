#include <stdio.h>
#include <string.h>

char *inp1[]={"Zoho","Eating","Watching","Pogo","Loving","Mango"},c='o';
int n=10,m=6;

void genline(int a,int b)
{
    if(numlen(b)<=m)
    {
        int c,d,e=0;
        if((b>0)&&(numlen(b)>1))
        {
            //printf("%d\n",b);
            d=b;
            while(d>0)
            {
                e+=stlen(d%10-1);
                d/=10;
            }
            
            if(e<=n)
            {
                d=b;
                while(d>0)
                {
                    printf("%s ",inp1[d%10-1]);
                    d/=10;
                }
                printf("\n");
            }
        }
        for(c=a;c<=m;c++)
            genline(c+1,(b*10)+c);
    }
}

int stlen(int a)
{
    int b,d=0;
    for(b=0;b<strlen(inp1[a]);b++)
    {
        if(toupper(inp1[a][b])!=toupper(c))
           d++; 
    }
    return d;
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

int main()
{
    printf("Generated Lines:\n");
    genline(1,0);
    return 0;
}
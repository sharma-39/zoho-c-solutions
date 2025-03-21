#include <stdio.h>
#include <string.h>

char inp[]="where there is a will, There is a way\0";
int i,j,k,n,m;

char strup(char a)
{
    int b=a;
    if((b>=97)&&(b<=122))
        a=b-32;
    return a;
}

int nextword(int a)
{
    int c,b;
    c=-1;
    for(b=a;b<n;b++)
    {
        if(inp[b]==' ')
        {
            c=b-1;
            b=n;
        }
    }
    if(c==-1)
        return n-1;
    else
        return c;
}

int stringcomp(int a, int b)
{
    int c=nextword(a)-a+1,d,e=0;
    for(d=0;d<c;d++)
    {
        if(strup(inp[a+d])!=strup(inp[b+d]))
        {
            e=1;
            d=c;
        }
    }
    return e;
}

int main()
{
    //printf("Enter the Passage\n");
    //gets(inp);
    n=strlen(inp);
    
    printf("\nWord Count Details\n");
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(stringcomp(i,j)==0)
                {
                    if(j>=i)
                        k++;
                    else
                    {
                        j=n;
                        k=0;
                    }
                }
            }
            j=nextword(j)+1;
        }
        if(k>0)
        {
            for(m=i;m<=nextword(i);m++)
                printf("%c",inp[m]);
            printf(" -%d\n",k);
        }
	i=nextword(i)+1;
    }
    getch();
    return 0;
}
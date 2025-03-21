#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char inp[1000],inp1[1000];
    int i,j,k,l,n=0,m=0;
    printf("Enter\nString- ");
    gets(inp);
    n=strlen(inp);
    printf("Sub String- ");
    gets(inp1);
    m=strlen(inp1);
    
    k=-1;
    for(i=0;i<n;i++)
    {
        if(i+m<n)
        {
            l=0;
            for(j=0;j<m;j++)
            {
                if((int)inp[i+j]!=(inp1[j]))
                    l=1;
            }
            if(l==0)
            {
                k=i;
                i=n-1;
            }
        }
        else
            i=n-1;
    }
    printf("\n%d",k);
    getch();
    return 0;
}
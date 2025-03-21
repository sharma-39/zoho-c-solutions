#include <stdio.h>
#include <string.h>

char toup(char a)
{
    int b;
    b=a;
    if((b>=97)&&(b<=122))
        b-=32;
    return b;
}

int main()
{
    char inp[]="Subline",inp1[]="line";
    int i,j,k,n,m;
    
    n=m=0;
    while(inp[n]!='\0')
        n++;
    while(inp1[m]!='\0')
        m++;
    
    if(m<=n)
    {
        k=1;
        i=j=0;
        while((i<n)&&(j<m))
        {
            while(inp1[j]=='*')
                j++;
            
            while((toup(inp[i])!=toup(inp1[j]))&&(i<n))
                i++;
            
            if((i==n)&&(inp1[m-1]!='*'))
            {
                k=0;
                break;
            }
            
            i++;
            j++;
        }
        if(k==1)
            printf("TRUE");
        else
            printf("FALSE");
    }
    else
        printf("FALSE");
    return 0;
}
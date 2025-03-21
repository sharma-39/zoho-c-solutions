#include <stdio.h>
#include <string.h>

int inp[1000],inp1[1000][2],i,j,k,n,m=0;

void checkarr(int a,int b)
{
    if(numlen(b)<n)
    {
        int c,d,e=0;
        d=b;
        while(d>0)
        {
            if(inp[d%10-1]<0)
            {
                d=0;
                e=1;
            }
            d/=10;
        }
        
        if(e==0)
        {
            d=b;
            while(d>0)
            {
                e+=inp[d%10-1];
                d/=10;
            }
            inp1[m][0]=b;
            inp1[m][1]=e;
            m++;
        }
        
        for(c=a+1;c<=n;c++)
            checkarr(c,(b*10)+c);
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
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    checkarr(1,1);
    k=0;
    for(i=1;i<m;i++)
    {
        if(inp1[i][1]>inp1[k][1])
            k=i;
    }
    printf("\nSum -%d",inp1[k][1]);
    printf("\nElements - ");
    
    j=inp1[k][0];
    for(i=numlen(inp1[k][0]);i>0;i--)
    {
        printf("%d",inp[j/(int)pow(10,i-1)-1]);
        if(i>1)
            printf(",");
        j=j%(int)pow(10,i-1);
    }
    return 0;
}
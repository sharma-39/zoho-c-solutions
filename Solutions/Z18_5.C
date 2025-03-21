#include <stdio.h>
#include <string.h>

int inp[1000],inp1[1000][2],i,j,k,n,m=0;

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

void checkarr(int a,int b)
{
    if(numlen(b)<=n)
    {
        int c,d=0,e;
        if(b>0)
        {
            e=b;
            while(e>0)
            {
                d+=inp[(e%10)-1];
                e/=10;
            }
            inp1[m][0]=b;
            inp1[m][1]=d;
            m++;
        }
        
        for(c=a;c<=n;c++)
            checkarr(c+1,(b*10)+c);
    }
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
    
    checkarr(1,0);
    j=0;
    for(i=1;i<m;i++)
    {
        if(inp1[i][1]>inp1[j][1])
            j=i;
    }
    
    k=inp1[j][0];
    while(k>0)
    {
        printf("%d  ",inp[(k%10)-1]);
        k/=10;
    }
    printf("->  %d",inp1[j][1]);
    return 0;
}
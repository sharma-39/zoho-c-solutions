#include <stdio.h>
#include <string.h>

int inp[1000],inp1[1000],i,j,k,n,m;
//{10,20,30,12,5}-{10,5,30,20}
//{-1,0,3,2}-{3,4,0,-1,2}

int checkarr(int a,int b)
{
    int c,d=0;
    if(b==1)
    {
        for(c=0;c<n;c++)
        {
            if(inp[c]==a)
            {
                d=1;
                break;
            }
        }
    }
    else
    {
        for(c=0;c<m;c++)
        {
            if(inp1[c]==a)
            {
                d=1;
                break;
            }
        }
    }
    return d;
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
    printf("M Value-");
    scanf("%d",&m);
    
    while(m!=n)
    {
        printf("N and M values cannot be same\n");
        printf("M Value-");
        scanf("%d",&m);
    }
    
    for(i=0;i<m;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp1[i]);
    }
    
    if(n>m)
        k=n;
    else
        k=m;
    for(i=0;i<k;i++)
    {
        if(k==n)
        {
            if(checkarr(inp[i],2)==0)
                printf("%d is the extra element in array 1 at index %d\n",inp[i],i+1);
        }
        else
        {
            if(checkarr(inp1[i],1)==0)
                printf("%d is the extra element in array 2 at index %d\n",inp1[i],i+1);
        }
    }
    return 0;
}
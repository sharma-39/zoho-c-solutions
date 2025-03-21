#include <stdio.h>
#include <string.h>

int inp[1000],inp1[1000],i,j=0,n,k,l=0;
//{1,4,973,97}
//{1,4,89,73,9,7}

int checkarr(int b)
{
    if(numlen(b)<=n)
    {
        int c,d,e=0;
        if(b>0)
        {
            //printf("%d\n",b);
            d=b;
            while(d>0)
            {
                e=(e*(int)pow(10,numlen(inp[(d%10)-1])))+inp[(d%10)-1];
                d/=10;
            }
            if(numlen(e)==k)
            {
                inp1[j]=e;
                j++;
            }
        }
        for(c=1;c<=n;c++)
        {
            if(checknum(b,c)==0)
                checkarr((b*10)+c);
        }
    }
}

int checknum(int a,int b)
{
    int c=0;
    while(a>0)
    {
        if(a%10==b)
            a=c=1;
        a/=10;
    }
    return c;
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
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    printf("K Value-");
    scanf("%d",&k);
    
    checkarr(0);
    for(i=1;i<j;i++)
    {
        if(inp1[i]>inp1[l])
            l=i;
    }
    
    if(numlen(inp1[l])==k)
        printf("\nLargest Possible No. is %d",inp1[l]);
    else
        printf("\n%d digit no. not possible",k);
    return 0;
}
#include <stdio.h>
#include <string.h>

int inp[1000],i,j,k,n;

int checkcount(int a)
{
    int c,d=0;
    for(c=0;c<n;c++)
    {
        if(inp[c]==a)
            d++;
    }
    return d;
}

int alterposition(int a,int b)
{
    int c=a,d=checkcount(b),e;
    while(d>0)
    {
        while(inp[c]!=b)
            c++;

        e=inp[a];
        inp[a]=inp[c];
        inp[c]=e;
        
        c++;
        a++;
        d--;
    }
    return a-1;
}

int main()
{
    //{2,2,3,4,5,12,2,3,3,3,12}
    //{0,-1,2,1,0}
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    for(i=0;i<n;i++)
    {
        k=inp[i];
        for(j=i+1;j<n;j++)
        {
            if(checkcount(k)<checkcount(inp[j]))
                k=inp[j];
        }
        i=alterposition(i,k);
    }
    
    i=0;
    while(checkcount(inp[i])!=1)
        i++;
    
    for(;i<n;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
        {
            if(inp[k]>inp[j])
                k=j;
        }
        j=inp[k];
        inp[k]=inp[i];
        inp[i]=j;
    }
    
    printf("Sorted\n");
    for(i=0;i<n;i++)
        printf("%d ",inp[i]);
    return 0;
}
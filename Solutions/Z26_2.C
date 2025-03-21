#include <stdio.h>
#include <string.h>

int checkfab(int a)
{
    int b=1,c=1,d;
    while(c<a)
    {
        d=b;
        b=c;
        c+=d;
    }
    
    if(c!=a)
        return b;
    else
        return a;
}

int main()
{
    int inp[]=,i,j,n=6;
    //{2,10,4,8}
    //{1,10,6,8,13,21}
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(checkfab(inp[i])==inp[i])
            printf("%d ",inp[i]);
    }
    return 0;
}
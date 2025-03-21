#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,k,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    l=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(inp[i]+inp[j]==inp[k]) 
                {
                    l=1;
                    j=i=k=n;
                }
            }
        }
    }
    
    if(l==1)
        printf("True");
    else
        printf("False");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,k,n;
    //{2,5,1,6,2,6,7,10}
    //{4,1,2,2}
    printf("Enter N Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d,%d-"i+1,j+1);
        scanf("%d",&inp[i][j]);
    }
    
    if(n==1)
        printf("\nNo Second Maximum");
    else
    {
        for(i=0;i<2;i++)
        {
            for(j=i+1;j<n;j++)
            {
               if(inp[i]<inp[j])
               {
                   k=inp[i];
                   inp[i]=inp[j];
                   inp[j]=k;
               }
            }
        }
        printf("\n%d",inp[1]);
    }
    return 0;
}
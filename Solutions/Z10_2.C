#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,k,n,m;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number %d-",i+1);
        scanf("%d",&inp[i]);
    }
    printf("K Value-");
    scanf("%d",&k);
    
    printf("\nMaximum Nos. under sliding window\n");
    for(i=0;i<n-k+1;i++)
    {
        m=i;
        for(j=i+1;j<=i+k-1;j++)
        {
            if(inp[m]<inp[j])
                m=j;
        }
        if(i==n-k)
            printf("%d",inp[m]);
        else
            printf("%d,",inp[m]);
    }
    getch();
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,k,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Number %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(inp[i]>inp[j])
            {
                k=inp[i];
                inp[i]=inp[j];
                inp[j]=k;
            }
        }
    }
    
    printf("\nNos and its occurence\n");
    for(i=0;i<n;i++)
    {
        k=1;
        for(j=i+1;j<n;j++)
        {
            if(inp[i]==inp[j])
                k++;
            else if(inp[i]!=inp[j])
            {
                i=j-1;
                j=n;
            }
            else if(j==n-1)
                i=n;
        }
        printf("%d-%d\n",inp[i],k);
    }
    getch();
    return 0;
}
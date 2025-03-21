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
    
    printf("\nModified Array\n{");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(inp[i]<inp[j])
            {
                k=inp[j];
                j=n;
            }
        }
        
        for(j=0;j<n;j++)
        {
            if((inp[i]<inp[j])&&(k>inp[j]))
                k=inp[j];
        }
        if(k<inp[i])
            printf("%d>",inp[i]);
        else
            printf("%d>%d",inp[i],k);
        if(i<n-1)
            printf(",");
    }
    printf("}");
    return 0;
}
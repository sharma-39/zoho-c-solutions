#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,n,k;
    //{1,1,2,4}
    //{1,1,2,4,4,5}
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("\nWithout Duplication\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("%d  ",inp[i]);
        else
        {
            k=0;
            for(j=0;j<i;j++)
            {
                if(inp[i]==inp[j])
                {
                    k=1;
                    j=i;
                }
            }
            if(k==0)
                printf("%d  ",inp[i]);
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d>-",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("\nGreater Elements\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
            printf("%d  ",inp[i]);
        else if(inp[i]>inp[j])
            printf("%d  ",inp[i]);
        j=i;
    }
    return 0;
}
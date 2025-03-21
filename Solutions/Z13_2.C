#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("\nPattern\n");
        k=1;
        for(i=1;i<=n;i++)
        {
            l=n+1;
            for(j=1;j<=n;j++)
            {
                if(j<=k)
                    l--;
                else if(j>n-k+1)
                    l++;
                printf("%d",l);
            }
            if(i<n/2)
                k++;
            else if(i>n/2)
                k--;
            printf("\n");
        }
    }
    else
        printf("%d is not even number",n);
    return 0;
}
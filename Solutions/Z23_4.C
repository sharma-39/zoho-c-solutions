#include <stdio.h>
#include <string.h>

int main()
{
    int inp[100][100],i,j,k,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    k=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Value %d,%d-"i+1,j+1);
            scanf("%d",&inp[i][j]);
            k+=inp[i][j];
        }
    }
    
    printf("\nSum of matrix-%d",k);
    return 0;
}
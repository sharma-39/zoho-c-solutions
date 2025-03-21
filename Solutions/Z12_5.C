#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,n;
    printf("Enter N Value-");
    scanf("%d",&n);
    
    printf("\nPattern\n");
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=n-i+1;j++)
        {
            if((i<=2)&&(j==1))
                printf("    ");
            printf("%d  ",k);
            k+=(n-j+1);
        }
        printf("\n");
    }
    getch();
    return 0;
}
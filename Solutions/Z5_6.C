#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,k,l,n;
    printf("Enter N Value- ");
    scanf("%d",&n);
    
    printf("\nPattern 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d",i+1);
        printf("\n");
    }
    
    printf("\nPattern 2\n");
    k=1;
    l=2;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                printf("%d ",l);
                l+=2;
            }
            else
            {
                printf("%d ",k);
                k+=2;
            }
        }
        printf("\n");
    }
    getch();
    return 0;
}
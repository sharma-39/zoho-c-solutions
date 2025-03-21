#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,n,m;
    printf("Enter\nValue 1-");
    scanf("%d",&n);
    printf("Value 2-");
    scanf("%d",&m);
    
    printf("\nPerfect Squares\n");
    for(i=n;i<=m;i++)
    {
        k=0;
        for(j=2;j<i/2;j++)
        {
            if(j*j==i)
            {
                k=1;
                j=i/2;
            }
        }
        if(k==1)
            printf("%d\n",i);
    }
    getch();
    return 0;
}
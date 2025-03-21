#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,n,m;
    printf("Enter\nRow Hieght- ");
    scanf("%d",&n);
    printf("Column Hieght- ");
    scanf("%d",&m);
    
    printf("\nExpected Pattern\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(((i==1)||(i==n-2))&&((j>=1)&&(j<=m-2)))
                printf("0 ");
            else if(((i>=1)&&(i<=n-2))&&((j==1)||(j==m-2)))
                printf("0 ");
            else
                printf("X ");
        }
        printf("\n");
    }
    getch();
    return 0;
}
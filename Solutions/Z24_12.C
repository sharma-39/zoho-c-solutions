#include <stdio.h>
#include <string.h>

char inp[100][100],c;
int i,j,n,m,k;

int insert(char a)
{
    for(i=n-1;i>=0;i--)
    {
        if(inp[i][k-1]=='-')
        {
            inp[i][k-1]=a;
            break;
        }
    }
    if(i<=0)
        return 0;
    else
        return 1;
}

void printmat()
{
    printf("Contents of the matrix :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%c ",inp[i][j]);
        printf("\n");
    }
}

int main()
{
    printf("Enter the matrix size(m*n) :");
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            inp[i][j]='-';
    while(1)
    {
        printf("Enter the column number :");
        scanf("%d",&k);
        if((k>0)&&(k<=m))
        {
            printf("Enter the color of the balloon :");
            scanf(" %c",&c);
            if(insert(toupper(c))==1)
            {
                printmat();
                printf("Do you wish to continue(Y/N) :");
                scanf(" %c",&c);
                if(toupper(c)=='N')
                {
                    printf("Program Stopped");
                    exit(0);
                }
            }
            else
            {
                printmat();
                printf("Column is filled completely. Program is terminated.");
                exit(0);
            }
        }
    }
    return 0;
}
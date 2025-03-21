#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000][1000],inp1[1000][1000],i,j,k,l,o,n,m;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    
    printf("Matrix 1\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Value <%d,%d>-",i+1,j+1);
            scanf("%d",&inp[i][j]);
        }
    }
    
    printf("Enter M Value-");
    scanf("%d",&m);
    if(m<n)
    {
        printf("Matrix 2\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
            {
                printf("Value <%d,%d>-",i+1,j+1);
                scanf("%d",&inp1[i][j]);
            }
        }
        
        for(i=0;i<n-m+1;i++)
        {
            for(j=0;j<n-m+1;j++)
            {
                o=0;
                for(k=i;k<i+m;k++)
                {
                    for(l=j;l<j+m;l++)
                    {
                        if(inp[k][l]!=inp1[k-i][l-j])
                        {
                            o=1;
                            l=j+m;
                            k=i+m;
                        }
                    }
                }
                if(o==0)
                {
                    j=n-m+1;
                    i=n-m+1;
                }
            }
        }
        
        if(o==0)
            printf("\nTrue");
        else
            printf("\nFalse");
    }
    else
        printf("\nChecking Matrices Not Possible");
    getch();
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000][1000],inp1[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j,k=1,l,n=3,o=0;
    //{3,6,9},{2,5,8},{1,4,7}
    //{9,8,7},{6,5,4},{3,2,1}
    //{7,4,1},{8,5,2},{9,6,3}
    //{1,2,3},{4,5,6},{7,8,9}
    
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
    
    printf("Matrix 2\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Value <%d,%d>-",i+1,j+1);
            scanf("%d",&inp1[i][j]);
        }
    }
    
    //90 Degree
    k=l=0;
    for(i=0;i<n;i++)
    {
        l=0;
        for(j=n-1;j>=0;j--)
        {
            if(inp[j][i]!=inp1[k][l])
            {
                i=n;
                j=0;
                o=1;
            }
            l++;
        }
        k++;
    }

    if(o==1)
    {
        o=0;
        //180 Degree
        k=l=0;
        for(i=n-1;i>=0;i--)
        {
            l=0;
            for(j=n-1;j>=0;j--)
            {
                if(inp[i][j]!=inp1[k][l])
                {
                    j=i=0;
                    o=1;
                }
                l++;
            }
            k++;
        }
    }
    
    if(o==1)
    {
        o=0;
        //270 Degree
        k=l=0;
        for(i=n-1;i>=0;i--)
        {
            l=0;
            for(j=0;j<n;j++)
            {
                if(inp[j][i]!=inp1[k][l])
                {
                    j=n;
                    i=0;
                    o=1;
                }
                l++;
            }
            k++;
        }
    }
    
    if(o==0)
        printf("\nTrue");
    else
        printf("\nFalse");
    return 0;
}
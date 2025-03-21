#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000][1000],i,j,n,m,k,l,o;
    //{{1,0,1},{1,1,0},{1,1,1},{1,0,1}}
    //{{1,1,0},{1,1,1},{1,0,1},{1,0,1}}
    printf("Enter\nRow Length-");
    scanf("%d",&n);
    printf("Column Length-");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Value %d,%d-",i+1,j+1);
            scanf("%d",&inp[i][j]);
            if((inp[i][j]!=0)&&(inp[i][j]!=1))
            {
                printf("Enter Value Correctly\n");
                j--;
            }
        }
    }
    
    printf("\nUnique Matrix\n");
    for(i=0;i<n;i++)
    {
        if(i==0)
            k=1;
        else
            k=0;
        for(j=0;j<m;j++)
        {
            if(k==0)
            {
                for(l=0;l<i;l++)
                {
                    k=0;
                    for(o=0;o<m;o++)
                    {
                        if(inp[i][o]==inp[l][o])
                            k++;
                    }
                    if(k==m)
                        l=i;
                }
                if(k==m)
                    j=m;
                else
                {
                    k=1;
                    j--;
                }
            }
            else if(k==1)
                printf("%d  ",inp[i][j]);
        }
        if(k==1)
            printf("\n");
    }
    return 0;
}
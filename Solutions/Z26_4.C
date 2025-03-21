#include <stdio.h>
#include <string.h>

int inp[1000][1000],inp1[100][2],i,j,k,n,l,m,o;
//{{1,1,0,0},{1,0,0,1},{1,1,1,1},{0,0,0,1}}
//{{1,1,0,0},{1,0,0,1},{1,1,1,1},{1,1,1,1}}

void pathfind(int a,int b,int c,int d)
{
    if((a<=n)&&(b<=n))
    {
        if(inp[a-1][b-1]!=0)
        {
            if((a==n)&&(b==n))
            {
                inp1[k][0]=c;
                inp1[k][1]=d;
                k++;
            }
            else
            {
                pathfind(a+1,b,(c*10)+a+1,(d*10)+b);
                pathfind(a,b+1,(c*10)+a,(d*10)+b+1);
            }
        }
    }
}

int numlen(int a)
{
    int b=0;
    while(a>0)
    {
        b++;
        a/=10;
    }
    return b;
}

int main()
{
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
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
    
    pathfind(1,1,1,1);
    printf("\nPossible Paths-%d\n",k);
    for(o=0;o<k;o++)
    {
        l=inp1[o][0];
        m=inp1[o][1];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(((l/(int)pow(10,numlen(l)-1)-1)==i)&&((m/(int)pow(10,numlen(m)-1)-1)==j))
                {
                    printf("- ");
                    l=l%(int)pow(10,numlen(l)-1);
                    m=m%(int)pow(10,numlen(m)-1);
                }
                else
                    printf("%d ",inp[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
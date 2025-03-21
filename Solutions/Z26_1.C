#include <stdio.h>
#include <string.h>

int inp[1000],inp1[1000][2],i,j,k=0,n=7,l,m;
//{1,1,2,3,1,2,4}

int checkarr(int a)
{
    int b=-1;
    for(b=k;b>-1;b--)
    {
        if(inp1[b][0]==a)
            break;
    }
    return b;
}

int main()
{
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(checkarr(inp[i])>-1)
            inp1[checkarr(inp[i])][1]++;
        else
        {
            inp1[k][0]=inp[i];
            inp1[k][1]=1;
            k++;
        }
    }
    
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(inp1[j][1]>inp1[i][1])
            {
                l=inp1[i][0];
                m=inp1[i][1];
                inp1[i][0]=inp1[j][0];
                inp1[i][1]=inp1[j][1];
                inp1[j][0]=l;
                inp1[j][1]=m;
            }
        }
    }
    
    printf("\nSecond Frequently Occuring No(s)\n");
    for(i=1;i<k;i++)
    {
        if(i==1)
            printf("%d ",inp1[i][0]);
        else if(inp1[1][1]==inp1[i][1])
            printf("%d ",inp1[i][1]);
        else
            break;
    }
    return 0;
}
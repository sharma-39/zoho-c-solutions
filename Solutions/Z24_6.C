#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],inp1[1000][2],i,j,n,k,l,m;
    //{1,3,10,7,9,2,4,6}
    //{1,3,9,7,8,2,4,6}
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("\nLongest Continuous Range\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(inp[i]>inp[j])
            {
                k=inp[i];
                inp[i]=inp[j];
                inp[j]=k;
            }
        }
    }
    
    j=k=0;
    for(i=0;i<n-1;i++)
    {
        if(inp[i+1]-inp[i]>1)
        {
            inp1[k][0]=inp[j];
            inp1[k][1]=i-j+1;
            k++;
            j=i+1;
        }
    }
    inp1[k][0]=inp[j];
    inp1[k][1]=(n-1)-j+1;
    k++;

    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(inp1[i][1]<inp1[j][1])
            {
                m=inp1[i][0];
                l=inp1[i][1];
                inp1[i][0]=inp1[j][0];
                inp1[i][1]=inp1[j][1];
                inp1[j][0]=m;
                inp1[j][1]=l;
            }
        }
    }
    
    for(i=0;i<k-1;i++)
    {
        if(inp1[i][1]-inp1[i+1][1]>1)
        {
            k=i+1;
        }
    }
    
    for(j=0;j<k;j++)
    {
        l=0;
        for(i=0;i<n;i++)
        {
            if(inp[i]==inp1[j][0])
            {
                l=1;
                printf("%d  ",inp[i]);
            }
            else if(l>0)
            {
                printf("%d  ",inp[i]);
                l++;
            }
            
            if(l==inp1[j][1])
                i=n;
        }
        printf("\n");
    }
    return 0;
}
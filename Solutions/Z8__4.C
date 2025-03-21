#include <stdio.h>
#include <string.h>

int inp[3][3]={{15,25,30},{45,25,60},{70,75,10}},i,j,k=0,n=3,m=3,o;
long inp1[1000][3],p,q;

int matpaths(int a, int b, long c,long d, int e)
{
    if((a<=n)&&(b<=m))
    {
        if((a==n)&&(b==m))
        {
            inp1[k][0]=c;
            inp1[k][1]=d;
            inp1[k][2]=e;
            k++;
        }
        else
        {
            matpaths(a+1,b,(c*10)+(a+1),(d*10)+b,e+inp[a][b-1]);
            matpaths(a,b+1,(c*10)+a,(d*10)+(b+1),e+inp[a-1][b]);
        }
    }
}

int numlen(long a)
{
    int c=0;
    while(a>0)
    {
        c++;
        a/=10;
    }
    return c;
}

int main()
{
    //printf("Enter\nRow Length-");
    //scanf("%d",&n);
    //printf("Column Length-");
    //scanf("%d",&m);
    //for(i=0;i<n;i++)
    //{
    //    for(j=0;j<m;j++)
    //    {
    //        printf("Value (%d,%d)-",i+1,j+1);
    //        scanf("%d",&inp[i][j]);
    //    }
    //}
    
    matpaths(1,1,1,1,inp[0][0]);
    o=0;
    for(i=1;i<k;i++)
    {
        if(inp1[o][2]<inp1[i][2])
            o=i;
    }
    
    printf("\nPath with maximum number of sum\n");
    p=inp1[o][0];
    q=inp1[o][1];
    for(i=numlen(inp1[o][0]);i>0;i--)
    {
        if(i==1)
            printf("%d",inp[(p/(int)pow(10,i-1))-1][(q/(int)pow(10,i-1))-1]);
        else
            printf("%d->",inp[(p/(int)pow(10,i-1))-1][(q/(int)pow(10,i-1))-1]);
        p%=(int)pow(10,i-1);
        q%=(int)pow(10,i-1);
    }
    printf(" Sum is %d",inp1[o][2]);
    getch();
    return 0;
}
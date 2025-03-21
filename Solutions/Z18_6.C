#include <stdio.h>
#include <string.h>

int inp[1000],inp1[1000],i,j,k=0,n,m;

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

void checkarr(int a,int b)
{
    if(numlen(b)<=n)
    {
        int c,d=0,e;
        if(b>0)
        {
            e=b;
            while(e>0)
            {
                d+=inp[(e%10)-1];
                e/=10;
            }
            
            if(d==m)
            {
                inp1[k]=b;
                k++;
            }
        }
        
        for(c=a;c<=n;c++)
            checkarr(c+1,(b*10)+c);
    }
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
    printf("Sum Value-");
    scanf("%d",&m);
    
    checkarr(1,0);
    printf("\nCombinations\n");
    for(i=0;i<k;i++)
    {
        j=inp1[i];
        while(j>0)
        {
            printf("%d  ",inp[(j%10)-1]);
            j/=10;
        }
        printf("\n");
    }
    return 0;
}
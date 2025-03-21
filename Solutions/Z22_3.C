#include <stdio.h>
#include <string.h>

int bincoe(int a,int b)
{
    return fact(a)/(fact(b)*fact(a-b));
}

int fact(int a)
{
    int b=1;
    while(a>1)
    {
        b*=a;
        a--;
    }
    return b;
}

int sumno(int a)
{
    int b=0;
    while(a>0)
    {
        b+=a;
        a--;
    }
    return b;
}

int main()
{
    int i,j,k,l,m,o,n,p;
    printf("Enter N Value-");
    scanf("%d",&n);
    printf("\nOverall Pascal Triangle\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
            printf("%d  ",bincoe(i,j));
        printf("\n");
    }
    
    printf("\nPossible Triangles");
    p=0;
    for(i=2;i<=n;i++)
    {
        p+=sumno(n-i+1);
        printf("\nHeight-%d\n",i);
        for(j=0;j<n-i+1;j++)
        {
            for(k=0;k<=j;k++)
            {
                for(l=j;l<j+i;l++)
                {
                    m=k;
                    for(o=j;o<=l;o++)
                    {
                        printf("%d  ",bincoe(l,m));
                        m++;
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    }
    
    printf("Possible Triangles Count-%d",p);
    return 0;
}
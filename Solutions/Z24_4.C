#include <stdio.h>
#include <string.h>

int bincoe(int a,int b)
{
    return fact(a)/(fact(b)*(fact(a-b)));
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

int main()
{
    int i,j,n=7;
    printf("Enter N Value-");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
           printf("%d   ",bincoe(i,j));
        printf("\n");
    }
    return 0;
}
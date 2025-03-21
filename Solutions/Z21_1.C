#include <stdio.h>
#include <string.h>

int checkprime(int a)
{
    int b,c=1;
    for(b=2;b<=a/2;b++)
    {
        if(a%b==0)
        {
            c=0;
            b=a/2;
        }
    }
    return c;
}

int main()
{
    int i,j,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    
    j=0;
    for(i=1;i<n;i++)
    {
        if(checkprime(i)==1)
        {
            if(checkprime(n-i)==1)
            {
                j=i;
                i=n;
            }
        }
    }
    if(j==0)
        printf("\n%d cannot be expressed as sum of two numbers",n);
    else
        printf("\n%d = %d + %d",n,j,n-j);
    return 0;
}
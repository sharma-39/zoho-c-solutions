#include <stdio.h>
#include <string.h>

int checkpal(int a)
{
    int b,c=0;
    b=a;
    while(b>0)
    {
        c=(c*10)+(b%10);
        b/=10;
    }
    
    if(a==c)
        return 1;
    else
        return 0;
}

int reverse(int a)
{
    int b=0;
    while(a>0)
    {
        b=(b*10)+(a%10);
        a/=10;
    }
    return b;
}

int main()
{
    int i=0,j,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    
    j=n;
    while(i<=10000)
    {
        if(checkpal(j+reverse(j))==1)
        {
            j=j+reverse(j);
            break;
        }
        else
            j=j+reverse(j);
        i++;
    }
    
    if((j>n)&&(i!=10001))
        printf("\n%d",j);
    else
        printf("\nNot possible for %d",n);
    return 0;
}
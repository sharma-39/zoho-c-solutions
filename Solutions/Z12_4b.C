#include <stdio.h>
#include <string.h>

int todecimal(long a, int b)
{
    int c,d;
    c=d=0;
    while(a>0)
    {
        c+=((a%10)*pow(b,d));
        a/=10;
        d++;
    }
    return c;
}

long tobase(long a, int b)
{
    long c,d;
    c=d=0;
    while(a>0)
    {
        c=((a%b)*pow(10,d))+c;
        a=(int)a/b;
        d++;
    }
    return c;
}

int main()
{
    long k,n,m,o;
    printf("Enter\nValue 1-");
    scanf("%d",&n);
    printf("Value 2-");
    scanf("%d",&m);
    printf("Base-");
    scanf("%d",&o);
    
    k=todecimal(n,o)+todecimal(m,o);
    printf("\nSum -%d",tobase(k,o));
    getch();
    return 0;
}
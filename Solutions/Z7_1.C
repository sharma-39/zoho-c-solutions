#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int checkcyclic(int a,int b)
{
    int c,d,e,f=1;
    while(a>0)
    {
        c=a%10;
        d=0;
        e=b;
        while(e>0)
        {
            if(e%10==c)
            {
                d=1;
                e=0;
            }
            e/=10;
        }
        if(d==0)
        {
            a=0;
            f=0;
        }
        a/=10;
    }
    return f;
}

int numlen(int a)
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
    int i,n,m,o;
    printf("Enter Number- ");
    scanf("%d",&n);
    
    m=1;
    o=numlen(n);
    for(i=1;i<=o;i++)
    {
        if(checkcyclic(i*n,n)==0)
        {
            m=0;
            i=o;
        }
    }
    if(m==0)
        printf("%d is not a cyclic number",n);
    else
        printf("%d is a cyclic number",n);
    getch();
    return 0;
}
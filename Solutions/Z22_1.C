#include <stdio.h>
#include <string.h>

int i=0,n;

void squaresum(int a)
{
    int b,c,d;
    b=leastsquare(a);
    c=(int)a/(b*b);
    d=a%(b*b);
    i+=c;
    //while(c>0)
    //{
    //    printf("%d^2    ",b);
    //    c--;
    //}
    if(d!=0)
        squaresum(d);
}

int leastsquare(int a)
{
    int b,c,d;
    for(b=a;b>0;b--)
    {
        d=1;
        for(c=2;c<=(int)b/2;c++)
        {
            if(c*c==b)
            {
                d=c;
                b=1;
                c=(int)b/2;
            }
        }
    }
    return d;
}

int main()
{
    printf("Enter N Value-");
    scanf("%d",&n);
    squaresum(n);
    printf("\nMin:%d",i);
    return 0;
}
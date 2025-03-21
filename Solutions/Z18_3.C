#include <stdio.h>
#include <string.h>

int fact(int a)
{
    int b,c=1;
    for(b=2;b<=a;b++)
        c*=b;
    return c;
}

int main()
{
    int i,j,x,n;
    float k;
    printf("Enter\nX-");
    scanf("%d",&x);
    printf("N-");
    scanf("%d",&n);
    
    k=0;
    j=1;
    for(i=1;i<=n;i++)
    {
        k=k+(pow(-1,i+1))*(pow(x,j)/(float)fact(j));
        j+=2;
    }
    
    printf("\n%f",k);
    return 0;
}
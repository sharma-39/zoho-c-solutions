#include <stdio.h>
#include <string.h>

int binary(int a)
{
    int b,c=0,d=0;
    b=a;
    while(b>1)
    { 
        if((c==0)&&(b%2==0))
            d++;
        c=(c*10)+(b%2);
        b/=2;
    }
    
    c=(c*10)+1;
    c=reverse(c);
    if(d!=0)
        c*=(int)pow(10,d);
    return c;
}

int reverse(int a)
{
    int b=0;
    while(a>0)
    {
        b=(b*10)+a%10;
        a/=10;
    }
    return b;
}

int main()
{
    int i,n;
    printf("Enter Number-");
    scanf("%d",&n);
    
    i=binary(n);
    if(i==reverse(i))
        printf("Binary of %d is %d & it is Palindrome",n,i);
    else
        printf("Binary of %d is %d -Not Palindrome",n,i);
    getch();
    return 0;
}
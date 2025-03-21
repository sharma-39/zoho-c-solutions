#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int removezero(int a)
{
    int b=0,c=0;
    while(a>0)
    {
        if(a%10!=0)
        {
            b+=((a%10)*pow(10,c));
            c++;
        }
        a/=10;
    }
    return b;
}

int main()
{
    int i,n,m,o;
    printf("Enter\nNumber 1- ");
    scanf("%d",&n);
    printf("Number 2- ");
    scanf("%d",&m);
    printf("Add(0) Or Sub(1)- ");
    scanf("%d",&o);
    
    if((o!=0)&&((o!=1)))
        printf("Invalid Input");
    else
    {
        if(o==0)
        {
            if(n+m==removezero(n)+removezero(m))
                printf("Addition operation is same even after removal of zero");
            else
                printf("Addition operation is not same even after removal of zero");
        }
        else
        {
            if(n-m==removezero(n)-removezero(m))
                printf("Subtraction operation is same even after removal of zero");
            else
                printf("Subtraction operation is not same even after removal of zero");
        }
    
    }
    getch();
    return 0;
}
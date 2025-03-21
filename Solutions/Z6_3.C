#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,k,n;
    printf("Enter Number- ");
    scanf("%d",&n);
    
    j=0;
    i=n;
    while(i>0)
    {
        j+=((i%10)*(i%10)*(i%10));
        i/=10;
    }
    if(n==j)
        printf("%d is Magic Number",n);
    else
        printf("%d is not Magic Number",n);
    getch();
    return 0;
}
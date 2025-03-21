#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int i,j,k,n,m;
    printf("Enter\nStarting No.- ");
    scanf("%d",&n);
    printf("Ending No.- ");
    scanf("%d",&m);
    
    if(n%2==0)
        n+=1;
    printf("\nOdd nos. in the given series\n");
    for(i=n;i<=m;i+=2)
    {
        printf("%d",i);
        if(i+2<=m) printf(",");
    }
    getch();
    return 0;
}
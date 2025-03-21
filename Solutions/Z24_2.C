#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n;
    printf("Enter N Value-");
    scanf("%d",&n);
    
    i=n;
    j=0;
    while(i>0)
    {
        if((i%10)%2==0)
            j++;
        i/=10;
    }
    printf("\nEven-%d",j);
    
    i=n;
    j=0;
    while(i>0)
    {
        if((i%10)%2!=0)
            j++;
        i/=10;
    }
    printf("\nOdd-%d",j);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k,l;
    printf("Value 1-");
    scanf("%d",&i);
    printf("Value 2-");
    scanf("%d",&j);
    printf("Value 3-");
    scanf("%d",&k);
    printf("Value 4-");
    scanf("%d",&l);
    
    if((i==k)&&(j==l)&&(i!=k))
        printf("\nIt can form a Rectangle");
    else if((i==j)&&(j==k)&&(k==l))
        printf("\nIt can form a Square");
    else
        printf("\nIt cannot form anything");
    return 0;
}
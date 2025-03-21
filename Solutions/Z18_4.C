#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k;
    printf("Enter\nValue 1-");
    scanf("%d",&i);
    printf("Value 2-");
    scanf("%d",&j);
    
    if(i>j)
    {
        k=i;
        i=j;
        j=k;
    }
    
    k=0;
    while(i>0)
    {
        printf("%d\n",i);
        k+=j;
        i--;
    }
    
    printf("\n%d",k);
    return 0;
}
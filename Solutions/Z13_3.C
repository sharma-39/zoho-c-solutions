#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,k=0,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        j=i;
        while(j>0)
        {
            k++;
            j/=10;
        }
    }
    
    printf("\nTotal -%d",k);
    return 0;
}
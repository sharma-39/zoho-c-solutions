#include <stdio.h>
#include <string.h>

int inp[1000],i,j=0,k,n;

void checkarr(int a)
{
    if(a<n)
    {
        if(inp[a]==k)
            j++;
        checkarr(a+1);
    }
}

int main()
{
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    printf("Search Number-");
    scanf("%d",&k);
    checkarr(0);
    printf("\nNo. of Occurence of %d is %d",k,j);
    return 0;
}

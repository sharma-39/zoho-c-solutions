#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,k,n,m;
    printf("Enter\nThreshold Value-");
    scanf("%d",&m);
    printf("N Value-");
    scanf("%d",&n);
    
    k=0;
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
        j=inp[i];
        while(j>0)
        {
            if(j>=m)
                j-=m;
            else
                j=0;
            k++;
        }
    }
    
    printf("\nCount -%d",k);
    getch();
    return 0;
}
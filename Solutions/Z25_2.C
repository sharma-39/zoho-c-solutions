#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,n=0,k;
    while(1)
    {
        printf("Enter position-");
        scanf("%d",&j);
        if((j-1<=n)&&(n+1<1000))
        {
            printf("Enter value-");
            scanf("%d",&k);
            if(n>0)
            {
                for(i=n-1;i>=j-1;i--)
                    inp[i+1]=inp[i];
            }
            inp[j-1]=k;
            n++;
        }
        else if(n+1==1000)
        {
            printf("Memory Full");
            exit(0);
        }
        printf("Array\n");
        for(i=0;i<n;i++)
            printf("%d ",inp[i]);
        printf("\n");
    }
    return 0;
}
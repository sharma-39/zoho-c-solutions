#include <stdio.h>
#include <string.h>

int checkprime(int a)
{
    int c,d=-1;
    if(a>1)
    {
        for(c=2;c<=a/2;c++)
        {
            if(a%c==0)
            {
                d=0;
                break;
            }
        }
    }
    return d;
}

int main()
{
    int inp[1000],inp1[1000],i,j,n;
    //{11,5}-{20,7}
    printf("Enter\nN Value-");
    scanf("%d",&n);
    printf("Array 1\n");
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("Array 2\n");
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp1[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<=1000;j++)
        {
            if(checkprime(j)==-1)
            {
                if((inp[i]+j)%inp1[i]==0)
                {
                    printf("%d",j);
                    if(i<n-1)
                        printf(",");
                    break;
                }
            }
        }
    }
    return 0;
}
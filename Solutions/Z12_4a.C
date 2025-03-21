#include <stdio.h>
#include <string.h>

int main()
{
    long i,j,k,n,m;
    printf("Enter\nValue 1-");
    scanf("%d",&n);
    printf("Value 2-");
    scanf("%d",&m);
    
    i=j=k=0;
    while((n>0)||(m>0))
    {
        if(i+n%10+m%10>=2)
        {
            if(i+n%10+m%10==3)
                j+=((1)*pow(10,k));
            else if(i+n%10+m%10==2)
                j+=((0)*pow(10,k));
            i=1;
        }
        else
        {
            j+=((i+n%10+m%10)*pow(10,k));
            i=0;
        }
        
        k++;
        n/=10;
        m/=10;
    }
    if(i==1)
        j+=(i*pow(10,k));
    printf("\nSum -%d",j);
    getch();
    return 0;
}
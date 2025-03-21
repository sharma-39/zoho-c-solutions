#include <stdio.h>
#include <string.h>

int repnum(int a,int b)
{
    int c=0;
    while(b>0)
    {
        c=(c*10)+a;
        b--;
    }
    return c;
}

int main()
{
    int i,j,k,n,l,m,o;
    printf("Enter Number-");
    scanf("%d",&n);
    k=0;
    j=n;
    while(j>0)
    {
        k++;
        j/=10;
    }
    
    if(k%2==0)
        printf("\n%d Cannot create a mono digit number",n);
    else
    {
        l=n;
        j=l/(int)pow(10,k-1);
        l%=((int)pow(10,k-1));
        for(i=2;i<=k;i++)
        {
            if(i%2==0)
                m=l/(int)pow(10,k-i);
            else
            {
                if((m+(l/(int)pow(10,k-i))!=j)&&(m-(l/(int)pow(10,k-i))!=j))
                {
                    printf("\n%d Cannot create a mono digit number",n);
                    exit(0);
                }
            }
            l%=((int)pow(10,k-i));
        }
        
        l=n;
        o=1;
        l%=((int)pow(10,k-1));
        for(i=2;i<=k;i++)
        {
            if(i%2==0)
                m=l/(int)pow(10,k-i);
            else
            {
                printf("%d",repnum(j,o));
                if(m+(l/(int)pow(10,k-i))==j)
                    printf("(%d+%d)",m,(l/(int)pow(10,k-i)));
                else if(m-(l/(int)pow(10,k-i))==j)
                    printf("(%d-%d)",m,(l/(int)pow(10,k-i)));
                    
                if(l%(int)pow(10,k-i)>0)
                    printf("%d\n",l%(int)pow(10,k-i));
                else
                    printf("\n");
                o++;
            }
            l%=((int)pow(10,k-i));
        }
        printf("%d\n",repnum(j,o));
    }
    return 0;
}
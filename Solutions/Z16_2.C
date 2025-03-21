#include <stdio.h>
#include <string.h>

int numlen(int a)
{
    int b=0;
    while(a>0)
    {
        b++;
        a/=10;
    }
    return b;
}

int main()
{
    int inp[]={100,1,11,21,2,3},i,j,k,l,n=6,m;
    //printf("Enter\nN Value-");
    //scanf("%d",&n);
    //for(i=0;i<n;i++)
    //{
    //    printf("Value %d-",i+1);
    //    scanf("%d",&inp[i]);
    //}
    
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(inp[i]!=inp[j])
            {
                k=inp[i];
                l=inp[j];
                if(numlen(k)<numlen(l))
                    m=numlen(l);
                else
                    m=numlen(k);
                while(m>0)
                {
                    if((k/(int)pow(10,numlen(k)-1))<(l/(int)pow(10,numlen(l)-1)))
                    {
                        k=inp[i];
                        inp[i]=inp[j];
                        inp[j]=k;
                        m=0;
                    }
                    else
                    {
                        if(l%(int)pow(10,numlen(l)-1)==0)
                        {
                            k=inp[i];
                            inp[i]=inp[j];
                            inp[j]=k;
                            m=0;
                        }
                        else if(k%(int)pow(10,numlen(k)-1)==0)
                            m=0;
                        else
                        {
                            k=k%(int)pow(10,numlen(k)-1);
                            l=l%(int)pow(10,numlen(l)-1);
                            m--;
                        }
                    }
                }
            }
        }
        printf("%d  ",inp[i]);
    }
    return 0;
}
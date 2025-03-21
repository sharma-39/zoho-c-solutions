#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],inp1[1000],inp2[1000],i,j,k,n,m,o;
    printf("Enter\nNo 1 Length-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Digit %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("No 2 Length-");
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        printf("Digit %d-",i+1);
        scanf("%d",&inp1[i]);
    }
    
    printf("\nSum of two nos\n");
    i=n-1;
    j=m-1;
    k=o=0;
    while((i>=0)||(j>=0))
    {
        if(i<=-1)
            k+=inp1[j];
        else if(j<=-1)
            k+=inp[i];
        else
            k+=(inp1[j]+inp[i]);
        
        inp2[o]=k%10;
        k/=10;
        o++;
        i--;
        j--;
    }
    
    for(i=0;i<o/2;i++)
    {
        j=inp2[i];
        inp2[i]=inp2[(n-1)-i];
        inp2[(n-1)-i]=j;
    }
    
    for(i=0;i<o;i++)
        printf("%d ",inp2[i]);
    return 0;
}
#include <stdio.h>
#include <string.h>

int inp[1000],i,j,k,n;
void insert(int a)
{
    int b;
    for(b=n-1;b>=a;b--)
        inp[b+1]=inp[b];
    inp[a]=0;
    n++;
}

int main()
{
    //inp[0]=1;inp[1]=0;inp[2]=1;inp[3]=1;inp[4]=0;inp[5]=1;
    //inp[6]=1;inp[7]=0;inp[8]=1;inp[9]=1;inp[10]=1;inp[11]=1;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
        if((inp[i]!=0)&&(inp[i]!=1))
        {
            printf("Enter Value Correctly\n");
            i--;
        }
    }
    printf("K Value-");
    scanf("%d",&k);
    
    j=0;
    for(i=0;i<n;i++)
    {
        if(inp[i]==1)
        {
            if(j==k)
            {
                insert(i);
                i++;
                j=0;
            }
            j++;
        }
        else
        {
            if(j==k)
            {
                insert(i);
                i++;
            }
            j=0;
        }
    }
    if(j==k)
        insert(n);
    
    printf("\nModified-%d\n",n);
    for(i=0;i<n;i++)
        printf("%d ",inp[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int inp[1000],i,j,k,n;
    printf("Enter\nN Value-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Value %d-",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("\nElements-No. of Occurence\n");
    for(i=0;i<n;i++)
    {
        while((i<n)&&(inp[i]=='\0'))
            i++;
        
        k=1;
        for(j=i+1;j<n;j++)
        {
            if(inp[i]==inp[j])
            {
                inp[j]='\0';
                k++;
            }
        }
        
        if(inp[i]!='\0')
            printf("%d-%d\n",inp[i],k);
        inp[i]='\0';
    }
    return 0;
}
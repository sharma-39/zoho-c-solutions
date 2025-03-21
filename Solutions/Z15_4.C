#include <stdio.h>
#include <string.h>

int main()
{
    char inp[4][4]={{'a','z','o','l'},{'n','x','h','o'},{'v','y','i','v'},{'o','r','s','e'}},inp1[5][1000]={"van", "zoho", "love", "are", "is"};
    int i,j,k,l,o,p,n=4,m=5;
    
    printf("Enter\nN Value for 2D Grid-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Value %d,%d-",i+1,j+1);
            scanf("%d",&inp[i][j]);
        }
    }
    
    printf("M Value for Dictionary-");
    for(j=0;j<m;j++)
    {
        printf("Word %d-",j+1);
        scanf("%d",&inp1[j]);
    }
    
    for(i=0;i<m;i++)
    {
        p=0;
        for(j=0;j<1000;j++)
        {
            if(inp1[i][j]=='\0')
                j=1000;
            else
                p++;
        }
        
        j=k=l=o=0;
        while(((j<n)&&(k>n))||(l<p))
        {
            if(inp1[i][l]==inp[j][k])
            {
                
            }
        }
    }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char inp[1000];
    int i,j,k=0,n;
    printf("Enter String-");
    gets(inp);
    n=strlen(inp);
    j=i=0;
    while(i<n)
    {
        if(inp[i]=='"')
        {
            if(j==0)
                j=1;
            else
                j=0;
        }
        else if((inp[i]=='$')&&(j==0))
            k--;
            
        k++;
        i++;
    }
    printf("\nString Length-%d",k);
    return 0;
}

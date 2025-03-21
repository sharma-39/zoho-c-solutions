#include <stdio.h>
#include <string.h>

int main()
{
    char inp[1000];
    int i,j,k,n;
    printf("Enter String-");
    gets(inp);
    n=strlen(inp);
    
    if(n%2!=0)
    {
        i=0;
        while(i<n)
        {
            j=n/2;
            k=0;
            while(k+1<=n-(i+1))
            {
                printf(" ");
                k++;
            }
            
            k=0;
            while(1)
            {
                printf("%c",inp[j]);
                if(k==i)
                    break;
                    
                if(j==n-1)
                    j=-1;
                j++;
                k++;
            }
            printf("\n");
            i++;
        }
    }
    else
        printf("%s lenght is even",inp);
    return 0;
}
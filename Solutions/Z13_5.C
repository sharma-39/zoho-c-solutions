#include <stdio.h>
#include <string.h>

int isspecial(char a)
{
    if((isdigit(a)==0)&&(isalpha(a)==0))
        return 1;
    else
        return 0;
}

int main()
{
    char inp[1000];
    int i,j,n;
    printf("Enter String-");
    gets(inp);
    n=strlen(inp);
    
    printf("\nReversed String\n");
    j=n-1;
    for(i=0;i<n;i++)
    {
        if(isspecial(inp[i])==1)
            printf("%c",inp[i]);
        else
        {
            while(1)
            {
                if(isspecial(inp[j])==1)
                    j--;
                else
                    break;
            }
            printf("%c",inp[j]);
            j--;
        }
    }
    return 0;
}
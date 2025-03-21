#include <stdio.h>
#include <string.h>

int checkvowel(char a)
{
    if((toupper(a)=='A')||(toupper(a)=='E')||(toupper(a)=='I')||(toupper(a)=='O')||(toupper(a)=='U'))
        return 1;
    else
        return 0;
}

int main()
{
    char inp[1000],c;
    int i,j,n;
    printf("Enter String-");
    gets(inp);
    n=strlen(inp);
    
    i=0;
    j=n-1;
    while(i<j)
    {
        if(checkvowel(inp[i])==1)
        {
            while((j>0)&&(i<j))
            {
                if(checkvowel(inp[j])==1)
                {
                    c=inp[i];
                    inp[i]=inp[j];
                    inp[j]=c;
                    break;
                }
                j--;
            }
        }
        i++;
    }
    
    printf("\nReversed String %s",inp);
    return 0;
}
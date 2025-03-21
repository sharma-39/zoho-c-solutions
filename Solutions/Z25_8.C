#include <stdio.h>
#include <string.h>

int main()
{
    char inp[1000],c;
    int i,j,n;
    printf("Enter String-");
    gets(inp);
    n=strlen(inp);
    printf("\nString Details\n");
    j=0;
    c=inp[0];
    for(i=1;i<n;i++)
    {
        if((int)c==(int)inp[i])
            j++;
        else
        {
            if(j>0)
                printf("%c - %d\n",c,j);
            j=0;
            c=inp[i];
        }
    }
    if(j>0)
        printf("%c - %d\n",c,j);
    return 0;
}

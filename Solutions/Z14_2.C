#include <stdio.h>
#include <string.h>

int main()
{
    char inp[1000];
    int i,j,n;
    printf("Enter Roman-");
    gets(inp);
    n=strlen(inp);
    
    j=0;
    for(i=0;i<n;i++)
    {
        switch(toupper(inp[i]))
        {
            case 'I': j++;break;
            case 'V': j+=5;break;
            case 'X': j+=10;break;
            case 'L': j+=50;break;
            case 'C': j+=100;break;
            case 'D': j+=500;break;
            case 'M': j+=1000;
        }
    }
    printf("\n%s => %d",inp,j);
    return 0;
}
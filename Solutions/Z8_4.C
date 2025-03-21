#include <stdio.h>
#include <string.h>

int main()
{
    char inp[1000],inp1[1000];
    int i,n;
    for(i=0;i<1000;i++)
        inp[i]=inp1[i]='\0';
    
    printf("Enter\nList 1\n");
    gets(inp);
    
    printf("List 2\n");
    gets(inp1);
    
    if(strlen(inp)==strlen(inp1))
    {
        n=strlen(inp);
        printf("\nMismatched List\n");
        for(i=0;i<n;i++)
        {
            if(inp[i]!=inp1[i])
                printf("%c,%c\n",inp[i],inp1[i]);
        }
    }
    else
        printf("\nBoth Lists size are not same");
    getch();
    return 0;
}

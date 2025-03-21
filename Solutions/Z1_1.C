#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char inp[1000];
    int i,j,n=0;
    printf("Enter the input string- ");
    gets(inp);
    
    n=strlen(inp);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j==i)||(j==n-i-1))
                printf("%c ",inp[j]);
            else
                printf("  ");
        }
        printf("\n");
    }
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


int main()
{
    char inp[1000];
    int i,j,k,n;
    printf("Enter String- ");
    gets(inp);
    n=strlen(inp);
    
    printf("\nCombinations\n");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(i<=j)
            {
                for(k=i;k<=j;k++)
                    printf("%c",inp[k]);
                printf("\n");
            }
        }
    }
    getch();
    return 0;
}
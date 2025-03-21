#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
     char inp[1000];
     char inp1[100][100];
     char inp2[1000];
     int i,j,k,l,n=0,m=0,o;
     printf("Enter the String- ");
     gets(inp);
     printf("Enter the Sub String- ");
     gets(inp2);
     //strcpy(inp,"WELCOMETOZOHOCORPORATION\0");
     //strcpy(inp2,"toO\0");
     
     n=strlen(inp);
     m=strlen(inp2);
        
     k=0;
     printf("\nModified Array\n");
     for(i=0;i<100;i++)
     {
        for(j=0;j<5;j++)
        {
            inp1[i][j] = inp[k];
            printf("%c ",inp1[i][j]);
            k++;
            if(k==n)
                i=j=100;
        }
        printf("\n");
     }
     
     printf("\nSubString Search\n");
     printf("From Left to Right\n");
     k=0;
     for(i=0;i<100;i++)
     {
        for(j=0;j<5;j++)
        {
            if (j+m-1<5)
            {
                o=2;
                for(l=0;l<m;l++)
                {
                    if((int)toupper(inp2[l])!=(int)toupper(inp1[i][j+l]))
                    {
                        o=1;
                        l=m;
                    }
                }
            }
            k++;
            if(k==n)
                i=j=100;
        }
     }
     
     printf("\nFrom Top to Bottom\n");
     k=0;
     for(i=0;i<100;i++)
     {
        for(j=0;j<5;j++)
        {
            if (i+m-1<5)
            {
                o=2;
                for(l=0;l<m;l++)
                {
                    if((int)toupper(inp2[l])!=(int)toupper(inp1[i+l][j]))
                    {
                        o=1;
                        l=m;
                    }
                }
                if(o==2)
                {    
                    printf("Start Index: <%d,%d>\n",i,j);
                    printf("End Index: <%d,%d>\n\n",i+m-1,j);
                }
                
            }
            k++;
            if(k==n)
                i=j=100;
        }
     }
     getch();
     return 0;
}
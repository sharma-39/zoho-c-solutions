#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char **inp[100][2];
    char x[100];
    char inp1[100],inp2[100];
    int i,j,k,l,m,n=0;
    inp[0][0]="luke\0";inp[0][1]="shaw\0";
    inp[1][0]="wayne\0";inp[1][1]="rooney\0";
    inp[2][0]="rooney\0";inp[2][1]="ronaldo\0";
    inp[3][0]="shaw\0";inp[3][1]="rooney\0";
    printf("Enter the father name to be searched- ");
    gets(inp1);
    
    for(i=0;i<strlen(inp1);i++)
        inp1[i]=tolower(inp1[i]);
    strcpy(inp2,inp1);
    n=0;
    for(i=0;i<=3;i++)
    {
        if(strcmp(inp[i][1],inp2)==0)
        {
            n++;
        }
    }
    j=k=l=m=0;
    for(i=0;i<=3;i++)
    {
        if(strcmp(inp[i][1],inp2)==0)
        {
            if(k==0)
            {
                if (m==l)
                {
                    k++;
                    strcpy(inp2,inp[i][0]);
                    i=0;
                }
                else
                    m++;
            }
            else
            {
                j=j+1;
            }
            
            if(i==3)
            {
                l++;
                if(l<n) m=i=0;
            }
        }
    }
    printf("No. of grandchildren for %s- %d",inp1,j);
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char inp[100];
int i,j,k,n;

int main()
{
    printf("Enter N Value- ");
    scanf("%d",&n);
    
    for(i=0;i<100;i++)
        inp[i]='\0';
    i=n;
    k=0;
    j=1;
    printf("\nAlpha System Equivalent-");
    while(j>0)
    {
        if(i<=26)
        {
            inp[k]=(char)(64+i);
            k++;
            j=0;
        }
        else
        {
            j=i%26;
            inp[k]=(char)(64+j);
            k++;
            i/=26;
        }
    }
    
    for(i=k-1;i>=0;i--)
        printf("%c",inp[i]);
    getch();
    return 0;
}
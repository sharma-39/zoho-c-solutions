#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int perfectsquare(int a)
{
    int b,c;
    c=0;
    for(b=2;b<=a/2;b++)
    {
        if(b*b==a)
        {
            c=1;
            b=a/2;
        }
    }
    return c;
}

int condition2(int a)
{
    int b;
    b=0;
    if(a%4==0)
        b=1;
    else if(a%6==0)
        b=1;
    
    return b;
}

int main()
{
     int inp[1000][2];
     int i,j,k,l,n;
     printf("Enter\nN Value- ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
        printf("Input %d- ", (i+1));
        scanf("%d",&inp[i][0]);
     }
     
     for(i=0;i<n;i++)
     {
        if(perfectsquare(inp[i][0])==1)
            inp[i][1]=5;
        else if(condition2(inp[i][0])==1)
            inp[i][1]=4;
        else if(inp[i][0]%2==0)
            inp[i][1]=3;
        else
            inp[i][1]=0;
     }
     
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(inp[i][1]>inp[j][1])
            {
                k=inp[j][0];
                l=inp[j][1];
                inp[j][0]=inp[i][0];
                inp[j][1]=inp[i][1];
                inp[i][0]=k;
                inp[i][1]=l;
            }
        }
     }
     
     printf("\nSorted Order\n");
     for(i=0;i<n;i++)
     {
         printf("<%d,%d>",inp[i][0],inp[i][1]);
         if(i!=n-1)
            printf(",");
     }
     getch();
     return 0;
}
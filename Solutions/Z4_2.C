#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int factors(int a)
{
    int b,c=0;
    for(b=2;b<=a/2;b++)
        if(a%b==0)  c++;
    return c;
}

int main()
{
    int inp[1000],i,j,k,n;
    printf("Enter\nN Value- ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Number %d- ",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(factors(inp[j])>factors(inp[i]))
            {
                k=inp[j];
                inp[j]=inp[i];
                inp[i]=k;
            }
        }
        printf("%d\n",inp[i]);
    }
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int inp[1000],i,j,t,n=0;
    printf("Enter\nN value- ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("Value %d- ",i+1);
        scanf("%d",&inp[i]);
    }
    
    printf("\nSorted Array\n");
    for(i=0;i<n;i++)
    {
        for(j=i+2;j<n;j=j+2)
        {
            if(i%2==0)
            {
                if(inp[j]>inp[i])
                {
                    t=inp[j];
                    inp[j]=inp[i];
                    inp[i]=t;
                }
            }
            else
            {
                if(inp[j]<inp[i])
                {
                    t=inp[j];
                    inp[j]=inp[i];
                    inp[i]=t;
                }
            }
        }
        if(i==n-1)
            printf("%d",inp[i]);
        else
            printf("%d, ",inp[i]);
    }
    getch();
    return 0;
}
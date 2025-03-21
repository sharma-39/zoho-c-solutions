#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int inp[1000],i,j,k,l,t,n=0;
    printf("Enter\nN value- ");
    scanf("%d",&n);
    
    t=0;
    for(i=3;;i++)
    {
        j=i;
        l=0;
        while(j>0)
        {
            k=j%10;
            if((k!=3)&&(k!=4))
            {
                j=0;
                l=1;
            }
            j=j/10;
        }
        if(l==0)
            t++;
        if(t==n)
        {
            printf("%d",i);
            exit(1);
        }
    }
    getch();
    return 0;
}
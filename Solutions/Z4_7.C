#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int inp[]={3,9,7,4,6,8},i,j,k=0,n,m,o;

int recur(int a,int b)
{
    int c,d;
    if(replen(b)==m-1)
    {
        for(c=a;c<=n;c++)
        {
            if(repcheck(b,c)==0)
            {
                d=(b*10)+c;
                j=0;
                i=d;
                while(i>0)
                {
                    j+=inp[(i%10)-1];
                    i/=10;
                }
                
                if((j%o==0)&&(j>0))
                {
                    i=d;
                    j=0;
                    while(i>0)
                    {
                        if(inp[(i%10)-1]%o!=0)
                        {
                            i=0;
                            j=1;
                        }
                        i/=10;
                    }
                    
                    if(j==0)
                    {
                        k++;
                        i=d;
                        while(i>0)
                        {
                            if(i/10==0)
                                printf("%d\n",inp[(i%10)-1]);
                            else
                                printf("%d, ",inp[(i%10)-1]);
                            i/=10;
                        }
                    }
                }
            }
        }
    }
    else
    {
        for(c=a;c<=n;c++)
            recur(c+1,(b*10)+c);
    }
}

int repcheck(int a,int b)
{
    int c=0;
    while(a>0)
    {
        if(a%10==b)
        {
            c=1;
            a=0;
        }
        else
            a/=10;
    }
    
    return c;
}

int replen(int a)
{
    int c=0;
    while(a>0)
    {
        c++;
        a/=10;
    }
    return c;
}

int main()
{
    //printf("Enter\nArray Size- ");
    //scanf("%d",&n);
    //for(i=0;i<n;i++)
    //{
    //    printf("Number %d- ",i+1);
    //    scanf("%d",&inp[i]);
    //}
    //printf("X- ");
    //scanf("%d",&o);
    n=6;o=3;
    
    printf("\nPossible Groups\n");
    m=o-1;
    recur(1,0);
    m=o;
    recur(1,0);
    printf("\nNo. of Groups- %d",k);
    getch();
    return 0;
}
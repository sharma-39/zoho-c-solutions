#include <stdio.h>
#include <string.h>

int inp[100],i,j,k,l,n,m,p;

void binsum(long a,long b)
{
    if((checknum(a)==1)&&(l==0))
    {
        long d=0,c;
        while(d<k)
        {
            c=a+(pow(10,b)*d);
            if(b>0)
                binsum(c,b-1);
            else
            {
                if(checknumsum(c)==n)
                {
                    l=1;
                    printnumsum(c);
                }
            }
            d++;
        }
    }
}

int checknum(long a)
{
    int b=1;
    while(a>0)
    {
        if(a%10>k)
            a=b=0;
        a/=10;
    }
    return b;
}

int power(int a,int b)
{
    int c=1;
    while(b>0)
    {
        c*=a;
        b--;
    }
    return c;
}

void genbindec(int a)
{
    if(a<=n)
    {
        inp[k]=a;
        k++;
        genbindec(a*10);
        genbindec((a*10)+1);
    }
}

void sortarray()
{
    int a,b,c;
    for(a=0;a<k;a++)
    {
        for(b=a+1;b<k;b++)
        {
            if(inp[a]<inp[b])
            {
                c=inp[a];
                inp[a]=inp[b];
                inp[b]=c;
            }
        }
    }
}

int checknumsum(long a)
{
    int b=0;
    while(a>0)
    {
        b+=inp[a%10-1];
        a/=10;
    }
    return b;
}

void printnumsum(long a)
{
    while(a>0)
    {
        printf("%d  ",inp[a%10-1]);
        a/=10;
    }
}

int numlen(int a)
{
    int b=0;
    while(a>0)
    {
        b++;
        a/=10;
    }
    return b;
}

int checkbindec(int a)
{
    int b,c=0;
    for(b=0;b<k;b++)
    {
        if(inp[b]==a)
        {
            c=1;
            break;
        }
    }
    return c;
}

int main()
{
    //printf("Enter\nN Value-");
    //scanf("%d",&n);
    for(p=1;p<=100;p++)
    {
        k=0;    //Generated bin-dec array length
        m=2;    //Binsum combination length
        l=0;
        n=p;
        genbindec(1);
        sortarray();
        printf("%d=>",n);
        if(checkbindec(n)==1)
            printf("%d\n",n);
        else
        {
            while(l==0)
            {
                l=1;
                j=1;
                while(l<m)
                {
                    j=(j*10)+1;
                    l++;
                }
                
                l=0;
                binsum(j,0);
                for(i=1;i<m;i++)
                    binsum(j+power(10,i),i);
                m++;
            }
            printf("\n");
        }
    }
    return 0;
}
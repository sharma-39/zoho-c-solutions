#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char inp[1000],c='\0';
int i,j,k,n;

int checkcom(int a)
{
    int c,d=j,e,f;
    f=a;
    while(f>0)
    {
        e=a;
        c=0;
        while(e>0)
        {
            if(f%10==e%10)
                c++;
            e/=10;
        }
        if((c==0)||(c>1))
        {
            return  0;
            exit(0);
        }
        f/=10;
    }
    
    while(a>0)
    {
        e=d;
        c=0;
        while(e>0)
        {
            if(a%10==e%10)
                c++;
            e/=10;
        }
        if((c==0)||(c>1))
        {
            return  0;
            exit(0);
        }
        a/=10;
    }
    if(a==112)
        printf("%d  %d",j,c);
    return 1;
}

int main()
{
    printf("Enter String- ");
    gets(inp);
    n=strlen(inp);
    
    for(i=0;i<n;i++)
    {
        if(isdigit(inp[i])==0)
        {
            printf("Invalid String");
            exit(0);
        }
        else
            inp[i]=(char)(64+(int)(inp[i]-'0'));
    }
    
    //for(i=0;i<n;i++)
    //    printf("%c",inp[i]);
    //printf("\n");
    
    j=0;
    printf("\nCombinations\n");
    for(i=1;i<=n;i++)
        j=(j*10)+i;
    for(i=j;i<(n+1)*(int)pow(10,n-1);i++)
    {
        if(checkcom(i)==1)
        {
            k=i;
            while(k>0)
            {
                printf("%c",inp[k%10-1]);
                k/=10;
            }
            printf("\n");
        }
    }
    getch();
    return 0;
}
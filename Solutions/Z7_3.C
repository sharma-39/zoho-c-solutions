#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

char inp[1000],c='\0';
int i,j,k,l,n;

void evaluate()
{
    if (c=='+')
        l+=j;
    else if(c=='-')
        l-=j;
    else if(c=='*')
        l*=j;
    else if(c=='/')
        l/=j;
    c='\0';
    j=0;
}

int main()
{
    printf("Enter Mathematical Expression- ");
    gets(inp);
    n=strlen(inp);
    
    j=k=l=0;
    for(i=0;i<n;i++)
    {
        if(isdigit(inp[i])!=0)
        {
            if((l==0)&&(c=='\0'))
                k=(k*10)+(int)(inp[i]-'0');
            else
                j=(j*10)+(int)(inp[i]-'0');
        }
        else
        {
            if((inp[i]=='+')||(inp[i]=='-')||(inp[i]=='*')||(inp[i]=='/'))
            {
                if(c=='\0')
                    c=inp[i];
                else
                {
                    if(l==0)    l=k;
                    evaluate();
                    c=inp[i];
                }
            }
            else
            {
                printf("Invalid Expression");
                exit(0);
            }
        }
    }
    if(c!='\0')
        evaluate();
    printf("\nResult- %d",l);
    getch();
    return 0;
}
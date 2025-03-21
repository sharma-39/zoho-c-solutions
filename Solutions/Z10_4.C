#include <stdio.h>
#include <string.h>

int main()
{
    char arg[2][1000]={"Guruu\0","*\0"};
    int i,j,k,n,m;
    n=strlen(arg[0]);
    m=strlen(arg[1]);
    
    i=j=k=0;
    while((i<n)&&(j<m))
    {
        if(k==0)
        {
            if(arg[1][j]=='*')
            {
                k=1;
                while((arg[1][j]=='*')&&(j<m))
                    j++;
            }
            else if(arg[0][i]==arg[1][j])
            {
                i++;
                j++;
            }
            else
            {
                k=2;
                i=n;
                j=m;
            }
        }
        else
        {
            i=n;
            while((arg[0][i]!=arg[1][j])&&(i>=0))
                i--;
            if((i<n)&&(arg[0][i]==arg[1][j]))
            {
                k=0;
                j++;
            }
            else if(i==n+1)
                k=2;
        }
    }
    if(((i<n-1)||(j<m-1))&&(arg[1][m-1]!='*'))
        printf("No");
    else if(k==2)
        printf("No");
    else
        printf("Yes");
    getch();
    return 0;
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,k,l,n,m;
    printf("Enter N Value- ");
    scanf("%d",&n);
    
    printf("\nCombinations\n");
    k=1;
    m=((n-1)*2)+1;
    for(i=1;i<=m;i++)
    {
        l=n;
        for(j=1;j<=m;j++)
        {
            printf("%d",l);
            if((j<k)||(j>=m-k+1))
            {
                if(j>=((m/2)+1))
                    l++;
                else
                    l--;
            }
        }
        printf("\n");
        if(i>=((m/2)+1))
            k--;
        else
            k++;
    }
    getch();
    return 0;
}
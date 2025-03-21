#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int inp[]={2,4,5,6,7,9,10,13},inp1[]={2,3,4,5,6,7,8,9,11,15};
    int i,j,k,l,n=8,m=10;
    
    k=l=0;
    printf("Merged Array\n");
    for(i=0;i<n;i++)
    {
        if(k<m)
        {
            if((inp[i]>inp1[k]))
            {
                while(inp[i]>inp1[k])
                {
                   printf("%d\n",inp1[k]);
                   k++;
                }
                i--;
            }
            else
            {
                printf("%d\n",inp[i]);
                if((inp[i]==inp1[k])) k++;
            }
        }
        else
            printf("%d\n",inp[i]);
    }
    
    for(i=k;i<m;i++)
        printf("%d\n",inp1[k]);
    getch();
    return 0;
}
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int inp[]={1,3,4,5,6,8,9},inp1[]={1,5,8,9,2},i,j,k,n=7,m=5;
    //printf("Enter\nN Value(for List1)- ");
    //scanf("%d",&n);
    //for(i=0;i<n;i++)
    //{
    //    printf("Value %d- ",i+1);
    //    scanf("%d",&inp[i]);
    //}
    
    //printf("N Value(for List2)- ");
    //scanf("%d",&m);
    //for(i=0;i<m;i++)
    //{
    //    printf("Value %d- ",i+1);
    //    scanf("%d",&inp1[i]);
    //}
    
    printf("\nUnion\n");
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if((i!=j)&&(inp[i]==inp[j])&&(j<i))
            {
                k=1;
                j=n;
            }
        }
        if(k==0)
            printf("%d  ",inp[i]);
    }
    
    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(inp1[i]==inp[j])
            {
                k=1;
                j=n;
            }
        }
        if(k==0)
            printf("%d  ",inp1[i]);
    }
    
    printf("\n\nIntersection\n");
    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if(inp1[i]==inp[j])
            {
                k=1;
                j=n;
            }
        }
        if(k==1)
            printf("%d  ",inp1[i]);
    }
    
    printf("\n\nExcept\n");
    for(i=0;i<n;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if((i!=j)&&(inp[i]==inp[j])&&(j<i))
            {
                k=1;
                j=n;
            }
        }
        if((k==0)&&(inp[i]%2!=0))
            printf("%d  ",inp[i]);
    }
    
    for(i=0;i<m;i++)
    {
        k=0;
        for(j=0;j<n;j++)
        {
            if((inp1[i]==inp[j])&&(inp[j]%2!=0))
            {
                k=1;
                j=n;
            }
        }
        if((k==0)&&(inp[i]%2==0))
            printf("%d  ",inp1[i]);
    }
    getch();
    return 0;
}
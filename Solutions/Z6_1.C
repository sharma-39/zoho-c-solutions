#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int inp[1000][3],i,j,k,n;

void swap(int a, int b)
{
    int c;
    c=inp[a][0];
    inp[a][0]=inp[b][0];
    inp[b][0]=c;
    
    c=inp[a][1];
    inp[a][1]=inp[b][1];
    inp[b][1]=c;
    
    c=inp[a][2];
    inp[a][2]=inp[b][2];
    inp[b][2]=c;
}

int main()
{
    printf("Enter\nN Value- ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Day %d-",i+1);
        scanf("%d",&inp[i][0]);
        printf("Month %d-",i+1);
        scanf("%d",&inp[i][1]);
        printf("Year %d-",i+1);
        scanf("%d",&inp[i][2]);
    }
    
    //Year Sorting
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(inp[i][2]>inp[j][2])
                swap(i,j);
        }
    }
    
    //Month Sorting
    k=-1;
    for(i=0;i<n;i++)
    {
        if(k<i)
        {
            for(j=i+1;j<n;j++)
            {
                if((inp[i][2]==inp[j][2])&&(k==-1))
                    k=0;
                else if((inp[i][2]!=inp[j][2])&&(k==0))
                {
                    k=j-1;
                    j=n;
                }
            }
        }
        
        if(k>=i)
        {
            for(j=i+1;j<=k;j++)
            {
                if(inp[i][1]>inp[j][1])
                    swap(i,j);
            }
        }
    }
    
    //Day Sorting
    k=-1;
    for(i=0;i<n;i++)
    {
        if(k<i)
        {
            for(j=i+1;j<n;j++)
            {
                if((inp[i][1]==inp[j][1])&&(k==-1))
                    k=0;
                else if((inp[i][1]!=inp[j][1])&&(k==0))
                {
                    k=j-1;
                    j=n;
                }
            }
        }
        
        if(k>=i)
        {
            for(j=i+1;j<=k;j++)
            {
                if(inp[i][0]>inp[j][0])
                    swap(i,j);
            }
        }
    }
    
    printf("\nSorted Date\n");
    for(i=0;i<n;i++)
        printf("%d.%d.%d\n",inp[i][0],inp[i][1],inp[i][2]);
    getch();
    return 0;
}
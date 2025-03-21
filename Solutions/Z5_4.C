#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int inp[1000][1000],i,j,k,l,n=4,m=4,o,q,p;
    //printf("Enter\nN Value- ");
    //scanf("%d",&n);
    //printf("M Value- ");
    //scanf("%d",&m);
    k=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            //printf("Matrix Value (%d,%d)- ",i+1,j+1);
            //scanf("%d",&inp[i][j]);
            inp[i][j]=k;
            k++;
        }
    }
    
    printf("Input Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d  ",inp[i][j]);
        printf("\n");
    }
    
    j=i=o=q=0;
    p=1;
    k=((m-(o+q))*2)+(((n-(o+q))*2)-4);
    l=inp[o][q];
    while(p<=n*m)
    {
        if((i==o)&&(j<m-1-q))
            j++;
        else if((j==m-1-q)&&(i<n-1-o))
            i++;
        else if((i==n-1-o)&&(j>o))
            j--;
        else if(j==q)
            i--;
            
        inp[o][q]=inp[i][j];
        inp[i][j]=l;
        l=inp[o][q];
        
        k--;
        if(k==0)
        {
            o++;
            q++;
            i=o;
            j=q;
            k=((m-(o+q))*2)+(((n-(o+q))*2)-4);
            l=inp[o][q];
        }
        p++;
    }
    
    printf("\nRotated Matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            printf("%d  ",inp[i][j]);
        printf("\n");
    }
    getch();
    return 0;
}
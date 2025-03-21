#include <stdio.h>
#include <string.h>

int inp[1000][1000],inp1[1000][2],i,j,k,l,p=0,o=0,n,m;
//inp[5][4]={{0,1,1,0},{1,1,1,0},{0,1,1,1},{0,1,1,1},{0,1,1,1}}
//inp[5][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}}

int rectcheck(int a,int b,int c,int d)
{
    int e,f=0;
    for(e=0;e<p;e+=2)
    {
        if((inp1[e][0]==a)&&(inp1[e][1]==b)&&(inp1[e+1][0]==c)&&(inp1[e+1][1]==d))
        {
            f=1;
            break;
        }
    }
    return f;
}

int main()
{
    printf("Enter\nRow Length");
    scanf("%d",&n);
    printf("Column Length");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("Value %d,%d-",i+1,j+1);
            scanf("%d",&inp[i][j]);
            if((inp[i][j]!=1)&&(inp[i][j]!=0))
            {
                printf("\nValues must be either 1 or 0 only\n");
                i--;
                j--;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(inp[i][j]==1)
            {
                //Diagonal Check
                k=1;
                l=0;
                while((i+k<n)&(j+k<m))
                {
                    if((inp[l][j+k]==1)&&(inp[i+k][l]==1))
                        l++;
                    else
                        break;
                    if(l>k)
                    {
                        if(rectcheck(i,j,i+k,j+k)==0)
                        {
                            inp1[p][0]=i;
                            inp1[p][1]=j;
                            inp1[p+1][0]=i+k;
                            inp1[p+1][1]=j+k;
                            p+=2;
                            o++;
                        }
                        l=0;
                        k++;
                    }
                }
                
                //Column Check
                if(inp[i+1][j]==1)
                {
                    k=j+1;
                    while(k<m)
                    {
                        if((inp[i][k]==1)&&(inp[i+1][k]==1))
                        {
                            if(rectcheck(i,j,i+1,k)==0)
                            {
                                inp1[p][0]=i;
                                inp1[p][1]=j;
                                inp1[p+1][0]=i+1;
                                inp1[p+1][1]=k;
                                p+=2;
                                o++;
                            }
                            k++;
                        }
                        else
                            break;
                    }
                }
                
                //Row Check
                if(inp[i][j+1]==1)
                {
                    k=i+1;
                    while(k<n)
                    {
                        if((inp[k][j]==1)&&(inp[k][j+1]==1))
                        {
                            if(rectcheck(i,j,k,j+1)==0)
                            {
                                inp1[p][0]=i;
                                inp1[p][1]=j;
                                inp1[p+1][0]=k;
                                inp1[p+1][1]=j+1;
                                p+=2;
                                o++;
                            }
                            k++;
                        }
                        else
                            break;
                    }
                }
            }
        }
    }
    printf("Possible Rectangles Count-%d",o);
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    char inp[5][5]={{'P','W','K','C','T'},{'B','O','F','A','L'},{'O','O','E','R','M'},{'X','L','A','T','E'},{'A','C','O','T','N'}};
    char *inp1[] = {"BOX","FOX","POET","WOOL","MOUSE","CAMP","ROAM"};
    int i,j,k,l,p,o,n=5,m=7,q;
    
    for(i=0;i<m;i++)
    {
        printf("%s:\n",inp1[i]);
        q=0;
        for(j=0;j<n;j++)
        {
            for(k=0;k<n;k++)
            {
                if(inp[j][k]==inp1[i][0])
                {
                    o=1;
                    p=1;
                    //Left To Right
                    while((p<strlen(inp1[i]))&&(k+strlen(inp1[i])<n))
                    {
                        if(inp[j][k+p]!=inp1[i][p])
                        {
                            o=0;
                            p=strlen(inp1[i]);
                        }
                        p++;
                    }
                    
                    if((o==1)&&(k+strlen(inp1[i])<n))
                    {
                        q=1;
                        p=0;
                        while(p<strlen(inp1[i]))
                        {
                            printf("(%d,%d)",j,k+p);
                            p++;
                        }
                        printf("\n");
                    }
                    
                    o=1;
                    p=1;
                    //Top To Bottom
                    while((p<strlen(inp1[i]))&&(j+strlen(inp1[i])<n))
                    {
                        if(inp[j+p][k]!=inp1[i][p])
                        {
                            o=0;
                            p=strlen(inp1[i]);
                        }
                        p++;
                    }
                    
                    if((o==1)&&(j+strlen(inp1[i])<n))
                    {
                        q=1;
                        p=0;
                        while(p<strlen(inp1[i]))
                        {
                            printf("(%d,%d)",j+p,k);
                            p++;
                        }
                        printf("\n");
                    }
                    
                    o=1;
                    p=1;
                    //(Diagonal) Top To Bottom
                    while((p<strlen(inp1[i]))&&(k+strlen(inp1[i])<n)&&(j+strlen(inp1[i])<n))
                    {
                        if(inp[j+p][k+p]!=inp1[i][p])
                        {
                            o=0;
                            p=strlen(inp1[i]);
                        }
                        p++;
                    }
                    
                    if((o==1)&&(k+strlen(inp1[i])<n)&&(j+strlen(inp1[i])<n))
                    {
                        q=1;
                        p=0;
                        while(p<strlen(inp1[i]))
                        {
                            printf("(%d,%d)",j+p,k+p);
                            p++;
                        }
                        printf("\n");
                    }
                }
            }
        }
        if(q==0)
            printf("Not Found\n");
    }
    return 0;
}
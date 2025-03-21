#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
     int inp[9][9];
     int i,j,k,l,n,m,p;
     //for(i=0;i<9;i++)
     //{
     //    for(j=0;j<9;j++)
     //    {
     //        printf("Input %d- ", (i+1));
     //        scanf("%d",&inp[i][0]);
     //    }
     //}
     inp[0][0]=4;inp[0][1]=8;inp[0][2]=3;inp[0][3]=9;inp[0][4]=2;inp[0][5]=1;inp[0][6]=6;inp[0][7]=5;inp[0][8]=7;
     inp[1][0]=1;inp[1][1]=6;inp[1][2]=7;inp[1][3]=3;inp[1][4]=4;inp[1][5]=5;inp[1][6]=8;inp[1][7]=2;inp[1][8]=0;
     inp[2][0]=2;inp[2][1]=5;inp[2][2]=1;inp[2][3]=8;inp[2][4]=7;inp[2][5]=6;inp[2][6]=4;inp[2][7]=9;inp[2][8]=3;
     inp[3][0]=5;inp[3][1]=4;inp[3][2]=8;inp[3][3]=1;inp[3][4]=6;inp[3][5]=2;inp[3][6]=9;inp[3][7]=7;inp[3][8]=6;
     inp[4][0]=7;inp[4][1]=2;inp[4][2]=9;inp[4][3]=5;inp[4][4]=6;inp[4][5]=4;inp[4][6]=1;inp[4][7]=3;inp[4][8]=8;
     inp[5][0]=1;inp[5][1]=3;inp[5][2]=6;inp[5][3]=7;inp[5][4]=9;inp[5][5]=8;inp[5][6]=2;inp[5][7]=4;inp[5][8]=5;
     inp[6][0]=3;inp[6][1]=7;inp[6][2]=2;inp[6][3]=6;inp[6][4]=8;inp[6][5]=9;inp[6][6]=5;inp[6][7]=1;inp[6][8]=4;
     inp[7][0]=8;inp[7][1]=1;inp[7][2]=4;inp[7][3]=2;inp[7][4]=5;inp[7][5]=3;inp[7][6]=7;inp[7][7]=5;inp[7][8]=9;
     inp[8][0]=6;inp[8][1]=9;inp[8][2]=5;inp[8][3]=4;inp[8][4]=1;inp[8][5]=7;inp[8][6]=3;inp[8][7]=8;inp[8][8]=2;	
     
     printf("\nOverAll Matrix Error\n");
     for(i=0;i<9;i++)
     {
         for(j=0;j<9;j++)
         {
             for(k=j+1;k<9;k++)
             {
                 if(inp[i][j]==inp[i][k])
                    printf("Horizontal Error-%d- <%d,%d> and <%d,%d>\n",inp[i][j],i+1,j+1,i+1,k+1);
                    
                 if(inp[j][i]==inp[k][i])
                    printf("Vertical Error-%d- <%d,%d> and <%d,%d>\n",inp[j][i],j+1,i+1,k+1,i+1);
             }
         }
     }
     
     printf("\nSub Matrix Error\n");
     for(i=0;i<9;i=i+3)
     {
         for(j=0;j<9;j=j+3)
         {
             for(k=i;k<i+3;k++)
             {
                 for(l=j;l<j+3;l++)
                 {
                     if(l==j+2)
                     {
                         m=k+1;
                         p=j;
                     }
                     else
                     {
                         m=k;
                         p=l+1;
                     }
                     for(;m<i+3;m++)
                     {
                         if(p==j+3) p=j;
                         for(;p<j+3;p++)
                         {
                             if(inp[k][l]==inp[m][p] && !(k==m && l==p))
                                printf("Sub Matrix Error-%d- <%d,%d> and <%d,%d>\n",inp[k][l],k+1,l+1,m+1,p+1);
                         }
                     }
                 }
             }
         }
     }
     getch();
     return 0;
}
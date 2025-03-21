#include <stdio.h>
#include <string.h>

int main()
{
    int i,j,n,k,l;
    printf("Enter Value-");
    scanf("%d",&n);
    //for(l=8;l<120;l++)
    //{
    //    n=l;
        k=n;
        j=i=0;
        while(k>7)
        {
            j=j+((k-(((int)k/7)*7))*(int)pow(10,i));
            k=(int)k/7;
            i++;
        }
        j=j+(k*(int)pow(10,i));
        printf("Output-%d",j);
    //}
    return 0;
}
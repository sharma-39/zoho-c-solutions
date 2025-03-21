#include <stdio.h>
#include <string.h>

int fact(int a)
{
    int b,c=1;
    for(b=2;b<=a;b++)
        c*=b;
    return c;
}

int main()
{
    int x,y,z;
    printf("Enter\nValue X-");
    scanf("%d",&x);
    printf("Value Y-");
    scanf("%d",&y);
    printf("Value Z-");
    scanf("%d",&z);
    
    if((z<0)||(x<0))
    {
        printf("Calulation not possible");
        exit(0);
    }
    
    printf("\nResult-%f",(pow(x,y)/(fact(z)))+(z/(fact(x)+z)));
    return 0;
}
#include <stdio.h>
#include <string.h>

int main()
{
    int x1=2,x2=4,y1=4,y2=10,x,y;
    printf("Enter\nX1 Value-");
    scanf("%d",&x1);
    printf("Y1 Value-");
    scanf("%d",&y1);
    printf("X2 Value-");
    scanf("%d",&x2);
    printf("Y2 Value-");
    scanf("%d",&y2);
    x=x2-x1;
    y=y2-y1;
    printf("\n%f",round(sqrt(x*x+y*y)));
    return 0;
}
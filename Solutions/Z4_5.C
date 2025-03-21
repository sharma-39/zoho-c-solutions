#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char inp[100];
    int inp1[100],inp2[100],i,j,k,n,m,o;
    printf("Enter\nPetrol in car- ");
    scanf("%d",&n);
    m=n;
    printf("No. of Petrol Bunks- ");
    scanf("%d",&o);
    
    for(i=0;i<o;i++)
    {
        printf("Petrol Bunk %d- ",i+1);
        scanf("%c",&inp[i]);
        if(inp[i]=='\n')
            scanf("%c",&inp[i]);
    }
    
    for(i=0;i<o;i++)
    {
        if(i==0)
            printf("Distance from Home to Petrol Bunk %c- ",inp[i]);
        else if(i==o-1)
            printf("Distance from Petrol Bunk %c to Office- ",inp[i]);
        else
            printf("Distance from Petrol Bunk %c to Petrol Bunk %c- ",inp[i-1],inp[i]);
        scanf("%d",&inp1[i]);
        m-=inp1[i];
        printf("Capacity of Petrol Bunk %c- ",inp[i]);
        scanf("%d",&inp2[i]);
        m+=inp2[i];
    }
    
    if(m<0)
        printf("\nCar needs %d liters of petrol more",m);
    else if(m>0)
        printf("\nRemaining petrol in car is %d liters",m);
    else
        printf("\nThere is no more petrol");
    getch();
    return 0;
}
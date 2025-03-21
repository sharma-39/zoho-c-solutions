#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

char *snum(int a)
{
    switch (a)
    {
        case 1: return "One";break;
        case 2: return "Two";break;
        case 3: return "Three";break;
        case 4: return "Four";break;
        case 5: return "Five";break;
        case 6: return "Six";break;
        case 7: return "Seven";break;
        case 8: return "Eight";break;
        case 9: return "Nine";break;
        default: return "";
    }
}

int main()
{
    int n,i;
    printf("Enter the number- ");
    scanf("%d",&n);
    i=n;
    
    printf("\nNumber in words\n");
    if(n==0)
    { printf("Zero"); }
    
    //Hundred's
    if(n>99)
    {
        printf("%s Hundred ",snum(n/100));
        n%=100;
        if((i>99)&&(n>0))
        { printf("and "); }
    }
    
    //Ten's
    if(n>9)
    {
        if(n==10)
            printf("Ten ");
        else if(n==11)
            printf("Eleven ");
        else if(n==12)
            printf("Twelve ");
        else if(n==13)
            printf("Thirteen ");
        else if(n==14)
            printf("Fourteen ");
        else if(n==15)
            printf("Fifteen ");
        else if(n==16)
            printf("Sixteen ");
        else if(n==17)
            printf("Seventeen ");
        else if(n==18)
            printf("Eighteen ");
        else if(n==19)
            printf("Nineteen ");
        else if(n<=29)
            printf("Twenty ");
        else if(n<=39)
            printf("Thirty ");
        else if(n<=49)
            printf("Forty ");
        else if(n<=59)
            printf("Fifty ");
        else if(n<=69)
            printf("Sixty ");
        else if(n<=79)
            printf("Seventy ");
        else if(n<=89)
            printf("Eighty ");
        else if(n<=99)
            printf("Ninety ");
        if(n>20)
            n%=10;
    }
    
    //One's
    if((n<10)&&(n>0))
    { printf("%s",snum(n)); }
    printf("\n");
    getch();
    return 0;
}
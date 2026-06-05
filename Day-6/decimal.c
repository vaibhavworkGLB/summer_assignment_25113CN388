#include<stdio.h>

int main()
{
    int binary,n,rem,base=1,decimal=0;

    printf("Enter binary number: ");
    scanf("%d",&binary);

    n=binary;

    while(n>0)
    {
        rem=n%10;
        decimal=decimal+rem*base;
        base=base*2;
        n=n/10;
    }

    printf("Decimal = %d",decimal);

    return 0;
}
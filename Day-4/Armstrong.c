#include<stdio.h>
int main()
{
    int n,temp,digit,sum=0;
    printf("Enter number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if(temp==sum)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
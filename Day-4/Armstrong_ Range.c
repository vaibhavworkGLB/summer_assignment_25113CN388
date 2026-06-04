#include<stdio.h>
int main()
{
    int start,end,i,n,digit,sum;
    printf("Enter start and end: ");
    scanf("%d%d",&start,&end);
    for(i=start;i<=end;i++)
    {
        n=i;
        sum=0;
        while(n>0)
        {
            digit=n%10;
            sum=sum+(digit*digit*digit);
            n=n/10;
        }
        if(sum==i)
            printf("%d ",i);
    }
    return 0;
}
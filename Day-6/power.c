#include<stdio.h>

int main()
{
    int x,n,i,result=1;

    printf("Enter x and n: ");
    scanf("%d%d",&x,&n);

    for(i=1;i<=n;i++)
        result=result*x;

    printf("Answer = %d",result);

    return 0;
}
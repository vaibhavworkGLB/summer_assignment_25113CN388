#include<stdio.h>
int main()
{
    int n1,n2,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    lcm=n1;
    while(1)
    {
        if(lcm%n1==0 && lcm%n2==0)
        {
            printf("LCM = %d",lcm);
            break;
        }
        lcm++;
    }
    return 0;
}
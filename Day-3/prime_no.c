#include <stdio.h>
int main()
{
    int n, i, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if(prime == 1)
        printf("Prime Number");
    else
        printf("Not Prime Number");
        return 0;
}
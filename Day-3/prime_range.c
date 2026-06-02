#include <stdio.h>

int main()
{
    int n1, n2, i, j;

    printf("Enter starting number: ");
    scanf("%d", &n1);

    printf("Enter ending number: ");
    scanf("%d", &n2);

    for(i = n1; i <= n2; i++)
    {
        for(j = 2; j < i; j++)
        {
            if(i % j == 0)
                break;
        }

        if(j == i)
            printf("%d ", i);
    }

    return 0;
}
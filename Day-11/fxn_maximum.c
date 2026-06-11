#include <stdio.h>

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", maximum(a, b));

    return 0;
}
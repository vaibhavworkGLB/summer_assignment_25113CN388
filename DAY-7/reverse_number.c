#include <stdio.h>

int reverse = 0;

int reverseNumber(int n)
{
    if (n == 0)
        return reverse;

    reverse = reverse * 10 + n % 10;
    return reverseNumber(n / 10);
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%d", reverseNumber(n));

    return 0;
}
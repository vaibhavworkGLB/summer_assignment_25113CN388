#include <stdio.h>

int palindrome(int n)
{
    int temp = n, rev = 0, rem;

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    return temp == rev;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (palindrome(num))
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
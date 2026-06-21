#include <stdio.h>

int main()
{
    char str[100];
    int i = 0, len = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[len] != '\0' && str[len] != '\n')
    {
        len++;
    }

    printf("Reversed string: ");

    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
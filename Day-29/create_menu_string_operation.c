#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("\n===== MENU =====\n");
    printf("1. Find Length\n");
    printf("2. Copy String\n");
    printf("3. Concatenate Strings\n");
    printf("4. Compare Strings\n");
    printf("5. Reverse First String\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Length of first string = %lu", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String = %s", str2);
            break;

        case 3:
            strcat(str1, str2);
            printf("Concatenated String = %s", str1);
            break;

        case 4:
            if(strcmp(str1, str2) == 0)
                printf("Strings are Equal.");
            else
                printf("Strings are Not Equal.");
            break;

        case 5:
            strrev(str1);
            printf("Reversed String = %s", str1);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
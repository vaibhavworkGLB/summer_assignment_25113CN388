#include <stdio.h>

int main()
{
    int arr[100], n, i, choice;
    int key, found = 0;
    int largest, smallest, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n===== MENU =====\n");
    printf("1. Display Array\n");
    printf("2. Search Element\n");
    printf("3. Find Largest Element\n");
    printf("4. Find Smallest Element\n");
    printf("5. Find Sum of Elements\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Array Elements: ");
            for(i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            break;

        case 2:
            printf("Enter element to search: ");
            scanf("%d", &key);

            for(i = 0; i < n; i++)
            {
                if(arr[i] == key)
                {
                    found = 1;
                    break;
                }
            }

            if(found)
                printf("Element Found.");
            else
                printf("Element Not Found.");
            break;

        case 3:
            largest = arr[0];
            for(i = 1; i < n; i++)
            {
                if(arr[i] > largest)
                    largest = arr[i];
            }
            printf("Largest Element = %d", largest);
            break;

        case 4:
            smallest = arr[0];
            for(i = 1; i < n; i++)
            {
                if(arr[i] < smallest)
                    smallest = arr[i];
            }
            printf("Smallest Element = %d", smallest);
            break;

        case 5:
            for(i = 0; i < n; i++)
            {
                sum = sum + arr[i];
            }
            printf("Sum of Elements = %d", sum);
            break;

        default:
            printf("Invalid Choice!");
    }

    return 0;
}
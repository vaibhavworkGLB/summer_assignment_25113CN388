#include <stdio.h>

int main()
{
    int n, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int maxFreq = 0, maxElement;

    for(i = 0; i < n; i++)
    {
        int freq = 1;

        for(j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                freq++;
            }
        }

        if(freq > maxFreq)
        {
            maxFreq = freq;
            maxElement = arr[i];
        }
    }

    printf("Element with maximum frequency = %d\n", maxElement);
    printf("Frequency = %d", maxFreq);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int secret, guess, count = 0;

    srand(time(NULL));
    secret = rand() % 100 + 1;

    printf("Number Guessing Game\n");
    printf("Guess a number between 1 and 100\n");

    while (1)
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        count++;

        if (guess == secret)
        {
            printf("Correct! You guessed it in %d attempts.\n", count);
            break;
        }
        else if (guess > secret)
        {
            printf("Guess a smaller number.\n");
        }
        else
        {
            printf("Guess a larger number.\n");
        }
    }

    return 0;
}

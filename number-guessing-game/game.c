/*
 * Number Guessing Game
 * ---------------------
 * The computer picks a random number between 1 and 100.
 * The user keeps guessing until they get it right.
 *
 * Concepts demonstrated:
 *  - Variables
 *  - if / else
 *  - while loop
 *  - rand() and srand() from <stdlib.h>
 *  - User input with scanf()
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // Seed the random number generator with the current time,
    // so we get a different number each time the program runs.
    srand((unsigned int)time(NULL));

    int target = (rand() % 100) + 1;   // random number from 1 to 100
    int guess;
    int attempts = 0;

    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between 1 and 100.\n\n");

    printf("Guess a number: ");
    scanf("%d", &guess);
    attempts++;

    while (guess != target) {
        if (guess > target) {
            printf("Too high!\n\n");
        } else {
            printf("Too low!\n\n");
        }

        printf("Guess again: ");
        scanf("%d", &guess);
        attempts++;
    }

    printf("\nCorrect! The number was %d.\n", target);
    printf("You got it in %d attempt%s.\n", attempts, attempts == 1 ? "" : "s");

    return 0;
}
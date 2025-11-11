#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess, attempts = 0;

    srand(time(NULL)); // Seed the random number generator
    random = rand() % 100 + 1; // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");

    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > random)
            printf("Too high! Try again.\n");
        else if (guess < random)
            printf("Too low! Try again.\n");
        else
            printf("🎉 Correct! You guessed it in %d attempts.\n", attempts);

    } while (guess != random);

    printf("\nThanks for playing!\n");
    printf("Developed by Rushikesh Ghodake\n");

    return 0;
}

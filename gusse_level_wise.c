#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int level, guess, number;
    int attempts = 0, maxAttempts = 0;
    int maxScore = 0, score = 0;
    char choice;

    srand(time(0));

    do {
        attempts = 0;

        printf("\n🎮 NUMBER GUESSING GAME 🎮\n");
        printf("1. Easy   (1 - 50)\n");
        printf("2. Medium (1 - 100)\n");
        printf("3. Hard   (1 - 200)\n");
        printf("Choose Level: ");
        scanf("%d", &level);

        if (level == 1) {
            number = rand() % 50 + 1;
            maxAttempts = 10;
            maxScore = 100;
        } else if (level == 2) {
            number = rand() % 100 + 1;
            maxAttempts = 7;
            maxScore = 150;
        } else if (level == 3) {
            number = rand() % 200 + 1;
            maxAttempts = 5;
            maxScore = 200;
        } else {
            printf("Invalid Level!\n");
            continue;
        }

        printf("\nGuess the number!\n");

        while (attempts < maxAttempts) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Too High!\n");
            } else if (guess < number) {
                printf("Too Low!\n");
            } else {
                printf("\nCorrect Guess!\n");
                break;
            }
        }

        if (guess == number) {
            score = maxScore - (attempts - 1) * 10;
            if (score < 0) score = 0;
            printf(" You guessed it in %d attempts\n", attempts);
            printf(" Your Score: %d\n", score);
        } else {
            printf("\n Game Over!\n");
            printf("Correct Number was: %d\n", number);
            printf(" Score: 0\n");
        }

        printf("\nDo you want to play again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("\nThanks for playing!\n");
    return 0;
}

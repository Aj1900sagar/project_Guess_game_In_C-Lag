
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0)); // Seed the RNG

    int random_number = (rand() % 100) + 1; // Range: 1 to 100
    int no_of_guesses = 0;
    int guessed_number;
    // printf("Random number between 1 and 100: %d\n", random_number);
    do
    {
        printf("Guess the number :\n");
        scanf("%d", &guessed_number);
        if (guessed_number > random_number)
        {
            printf("lower number please!\n");
        }
        else if (guessed_number < random_number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("Congrats!\n");
        }
        no_of_guesses++;
    } while (guessed_number != random_number);
    printf("you guessed the number in %d gueesse : ", no_of_guesses);

    return 0;
}

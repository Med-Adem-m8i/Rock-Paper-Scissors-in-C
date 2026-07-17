#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"

int main() {
    srand(time(NULL));

    int user_choice, pc_choice;
    int winner;
    int wins = 0, losses = 0, draws = 0;

    printf("=== Welcome to Rock Paper Scissors ===\n\n");

    do {
        pc_choice = rand() % 3 + 1;
        user_choice = get_user_input();

        if (user_choice == 0) {
            printf("\nFinal Score:\n");
            display_score(wins, losses, draws);
            printf("Thanks for playing!\n");
            break;
        }

        if (user_choice < ROCK || user_choice > SCISSORS) {
            printf("Invalid input! Please enter 1, 2, or 3.\n\n");
            continue;
        }

        display_choices(user_choice, pc_choice);
        winner = determine_winner(user_choice, pc_choice);
        display_result(winner);

        if (winner == 1) wins++;
        else if (winner == -1) losses++;
        else draws++;

        display_score(wins, losses, draws);
        printf("\n");

    } while (play_again());

    printf("\nFinal Score:\n");
    display_score(wins, losses, draws);
    printf("Thanks for playing!\n");

    return 0;
}
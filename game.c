#include <stdio.h>
#include "game.h"

char* get_choice_name(int choice) {
    switch(choice) {
        case ROCK: return "Rock";
        case PAPER: return "Paper";
        case SCISSORS: return "Scissors";
        default: return "Invalid";
    }
}

int determine_winner(int user, int pc) {
    if (user == pc) return 0;

    if ((user == ROCK && pc == SCISSORS) ||
        (user == PAPER && pc == ROCK) ||
        (user == SCISSORS && pc == PAPER)) {
        return 1;  // User wins
        }
    return -1;  // PC wins
}

void display_choices(int user, int pc) {
    printf("\nYou chose: %s\n", get_choice_name(user));
    printf("PC chose: %s\n", get_choice_name(pc));
}

void display_result(int winner) {
    if (winner == 1) printf("🎉 You Win!\n");
    else if (winner == -1) printf("😢 You Lose!\n");
    else printf("🤝 You Draw!\n");
}

void display_score(int wins, int losses, int draws) {
    printf("Score: %d Wins, %d Losses, %d Draws\n", wins, losses, draws);
}

int get_user_input() {
    int choice;
    printf("\nChoose your move:\n");
    printf("  %d. Rock\n", ROCK);
    printf("  %d. Paper\n", PAPER);
    printf("  %d. Scissors\n", SCISSORS);
    printf("  0. Quit\n");
    printf("Your choice: ");
    scanf("%d", &choice);
    return choice;
}

bool play_again() {
    char response;
    printf("Play again? (y/n): ");
    scanf(" %c", &response);
    return (response == 'y' || response == 'Y');
}
#ifndef ROCKPAPERSCISSORS_GAME_H
#define ROCKPAPERSCISSORS_GAME_H

#include <stdbool.h>

// Constants
#define ROCK 1
#define PAPER 2
#define SCISSORS 3

// Function prototypes
char* get_choice_name(int choice);
int determine_winner(int user, int pc);
void display_choices(int user, int pc);
void display_result(int winner);
void display_score(int wins, int losses, int draws);
int get_user_input();
bool play_again();

#endif //ROCKPAPERSCISSORS_GAME_H
#include <stdio.h>
#include <string.h>

// Function to determine the outcome of a game of Rock, Paper, Scissors
char* determineWinner(const char player1[], const char player2[]) {

    // Check for invalid inputs
    if (strcmp(player1, "Rock") != 0 && strcmp(player1, "Paper") != 0 && strcmp(player1, "Scissors") != 0) {
        return "Invalid";
    }
    if (strcmp(player2, "Rock") != 0 && strcmp(player2, "Paper") != 0 && strcmp(player2, "Scissors") != 0) {
        return "Invalid";
    }

    // Check for draw
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    // Check for player1 winning
    if ((strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) ||
        (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) ||
        (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0)) {
        return "Player1";
    }

    if ((strcmp(player2, "Rock") == 0 && strcmp(player1, "Scissors") == 0) ||
        (strcmp(player2, "Paper") == 0 && strcmp(player1, "Rock") == 0) ||
        (strcmp(player2, "Scissors") == 0 && strcmp(player1, "Paper") == 0)) {
        return "Player2";
    }

    // If not a draw or player1 win, then player2 wins
    return 0;

}

int main(void) {


    return 0;
}
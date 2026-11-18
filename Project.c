#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

#define FILE_NAME "leaderboard.txt"

typedef struct {
    char name[30];
    int score;
} Player;

// Clears leftover characters from the input buffer to prevent infinite loops
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Updates score if points > 0, sorts, saves, and displays leaderboard
void handleLeaderboard(const char *name, int addPoints) {
    Player list[100];
    int count = 0, found = 0;

    FILE *fp = fopen(FILE_NAME, "r");
    if (fp) {
        while (count < 100 && fscanf(fp, "%29s %d", list[count].name, &list[count].score) == 2) {
            if (strcmp(list[count].name, name) == 0) {
                list[count].score += addPoints;
                found = 1;
            }
            count++;
        }
        fclose(fp);
    }

    if (!found && addPoints > 0 && count < 100) {
        strcpy(list[count].name, name);
        list[count].score = addPoints;
        count++;
    }

    // Sort highest to lowest
    // Bubble Sort (highest to lowest)
    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - i - 1; j++) {
            if (list[j].score < list[j + 1].score) {
                Player temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    if (addPoints > 0) {
        fp = fopen(FILE_NAME, "w");
        if (fp) {
            for (int i = 0; i < count; i++)
                fprintf(fp, "%s %d\n", list[i].name, list[i].score);
            fclose(fp);
        }
        printf("\n[+] +%d pts added for %s!\n", addPoints, name);
    }

    printf("\n--- LEADERBOARD ---\n");
    if (count == 0) printf("No scores yet!\n");
    for (int i = 0; i < count; i++)
        printf("%d. %-15s %d pts\n", i + 1, list[i].name, list[i].score);
    printf("-------------------\n");
}

// Game 1: Rock, Paper, Scissors
int playRPS() {
    const char *moves[] = {"", "Rock", "Paper", "Scissors"};
    int p, c, score = 0;
    printf("\n=== ROCK, PAPER, SCISSORS (3 Rounds) ===\n");

    for (int r = 1; r <= 3; r++) {
        printf("Round %d - (1)Rock (2)Paper (3)Scissors: ", r);
        if (scanf("%d", &p) != 1) {
            clearInput();
            printf("Invalid input! Lost round.\n");
            continue;
        }
        clearInput();

        if (p < 1 || p > 3) {
            printf("Invalid number! Lost round.\n");
            continue;
        }

        c = (rand() % 3) + 1;
        printf("You: %s | CPU: %s -> ", moves[p], moves[c]);

        if (p == c) printf("Draw!\n");
        else if ((p - c + 3) % 3 == 1) { printf("You Win!\n"); score += 15; }
        else printf("CPU Wins!\n");
    }
    return score;
}

// Game 2: Wordle
int playWordle() {
    const char *words[] = {"APPLE", "BRAIN", "CLOUD", "FLAME", "GRAPE", "HOUSE", "LEMON", "OCEAN", "ROBOT", "TIGER"};
    const char *secret = words[rand() % 10];
    char guess[20];

    printf("\n=== WORDLE (Guess the 5-letter word in 6 tries) ===\n");
    printf("[G]=Exact Spot, [Y]=Wrong Spot, [X]=Not in Word\n");

    for (int try = 1; try <= 6; try++) {
        printf("Try %d/6: ", try);
        if (scanf("%19s", guess) != 1) {
            clearInput();
            try--;
            continue;
        }
        clearInput();

        if (strlen(guess) != 5) {
            printf("Enter 5 letters!\n");
            try--;
            continue;
        }

        for (int i = 0; i < 5; i++) guess[i] = toupper((unsigned char)guess[i]);

        printf("Result: ");
        for (int i = 0; i < 5; i++) {
            char mark = 'X';
            if (guess[i] == secret[i]) mark = 'G';
            else if (strchr(secret, guess[i])) mark = 'Y';
            printf("%c[%c] ", guess[i], mark);
        }
        printf("\n");

        if (strcmp(guess, secret) == 0) {
            printf("Correct! Word was %s.\n", secret);
            return (7 - try) * 20;
        }
    }
    printf("Out of tries! Word was %s.\n", secret);
    return 0;
}

// Game 3: Memory Match (1-16 Slots)
int playMemory() {
    char cards[17] = "AABBCCDDEEFFGGHH";
    int open[16] = {0}, pairs = 0, turns = 0, a, b;

    for (int i = 15; i > 0; i--) {
        int j = rand() % (i + 1);
        char t = cards[i]; cards[i] = cards[j]; cards[j] = t;
    }

    printf("\n=== MEMORY MATCH (Pick two slots 1-16) ===\n");
    while (pairs < 8) {
        for (int i = 0; i < 16; i++) {
            if (open[i]) printf("[%c] ", cards[i]);
            else printf("[%2d]", i + 1);
            if ((i + 1) % 4 == 0) printf("\n");
        }

        printf("Pick 2 numbers: ");
        if (scanf("%d %d", &a, &b) != 2) {
            clearInput();
            printf("Invalid input! Please enter two numbers.\n\n");
            continue;
        }
        clearInput();
        a--; b--;

        if (a < 0 || a > 15 || b < 0 || b > 15 || a == b || open[a] || open[b]) {
            printf("Invalid pick! Try again.\n\n");
            continue;
        }

        turns++;
        printf("Revealed: %c and %c -> ", cards[a], cards[b]);
        if (cards[a] == cards[b]) {
            printf("MATCH!\n\n");
            open[a] = open[b] = 1;
            pairs++;
        } else {
            printf("No match.\n\n");
        }
    }

    int score = 120 - (turns * 4);
    return score > 20 ? score : 20;
}

int main() {
    srand(time(NULL));
    char player[30];
    int choice;

    printf("Enter your name: ");
    scanf("%29s", player);
    clearInput();

    while (1) {
        printf("\n=== ARCADE MENU (Player: %s) ===\n", player);
        printf("1. Rock Paper Scissors\n2. Wordle\n3. Memory Match\n4. Leaderboard\n5. Change Player\n0. Exit\nChoice: ");
        
        if (scanf("%d", &choice) != 1) {
            clearInput();
            printf("Invalid option. Please enter a number.\n");
            continue;
        }
        clearInput();

        if (choice == 1) handleLeaderboard(player, playRPS());
        else if (choice == 2) handleLeaderboard(player, playWordle());
        else if (choice == 3) handleLeaderboard(player, playMemory());
        else if (choice == 4) handleLeaderboard(player, 0);
        else if (choice == 5) {
            printf("New player name: ");
            scanf("%29s", player);
            clearInput();
        }
        else if (choice == 0) break;
        else printf("Invalid option.\n");
    }
    return 0;
}
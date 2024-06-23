#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/** This is an AI generated Text Adventure Game. All I did was debug the code.
  * It's in this repo because I wanted to put it on github, and I was working
  * in this repo when I generated this code. 
  */
#define MAX_ROOMS 5
#define MAX_DESCRIPTION 100
#define MAX_CHOICE 20

typedef struct {
    char description[MAX_DESCRIPTION];
    int choices[MAX_CHOICE];
    int num_choices;
} Room;

Room rooms[MAX_ROOMS] = {
    {"You are in a dark room. There is a door to the north.", {1}, 1},
    {"You are in a bright room. There is a door to the south and east.", {0, 2}, 2},
    {"You are in a room with a treasure chest. There is a door to the west.", {1}, 1},
    {"You are in a room with a monster. There is a door to the north.", {3}, 1},
    {"You are in a room with a key. There is a door to the south.", {3}, 1}
};

int current_room = 0;

void display_room() {
    printf("%s\n", rooms[current_room].description);
    for (int i = 0; i < rooms[current_room].num_choices; i++) {
        printf(" Choice %d: Go to room %d\n", i + 1, rooms[current_room].choices[i]);
    }
}

void play_game() {
    srand(time(NULL));
    while (1) {
        display_room();
        int choice;
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice > 0 && choice <= rooms[current_room].num_choices) {
            current_room = rooms[current_room].choices[choice - 1];
        } else {
            printf("Invalid choice. Try again.\n");
        }
        if (current_room == 2) {
            printf("Congratulations, you found the treasure!\n");
            break;
        }
    }
}

int main() {
    play_game();
    return 0;
}

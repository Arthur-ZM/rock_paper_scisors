#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int max = 3;
    int min = 1;

    srand(time(NULL));
    int player_choice;

    while (1) {
        int random_number = (rand() % (max - min + 1)) + min;

        printf("escolha um destes: \n1. rock\n2. paper\n3.scisors\n>");
        scanf("%i", &player_choice);

        switch (player_choice) {
            case 1: {
                printf("you chose rock\n");
                if (random_number == 1) {
                printf("machine has chosen rock\n");
                printf("it's a draw \n");
                }
                else if (random_number == 2) {
                    printf("machine has chosen paper\n");
                    printf("you lose \n");
                }
                else if (random_number == 3) {
                    printf("machine has chosen scissors\n");
                    printf("you win \n");
                }
                break;
            }

            case 2: {
                printf("you chose paper\n");
                if (random_number == 1) {
                    printf("machine has chosen rock\n");
                    printf("you win \n");
                }
                else if (random_number == 2) {
                    printf("machine has chosen paper\n");
                    printf("it's a draw \n");
                }
                else if (random_number == 3) {
                    printf("machine has chosen scissors\n");
                    printf("you lose \n");
                }
                break;
            }

            case 3: {
                printf("you chose scisors\n");
                if (random_number == 1) {
                    printf("machine has chosen rock\n");
                    printf("you lose \n");
                }
                else if (random_number == 2) {
                    printf("machine has chosen paper\n");
                    printf("you win \n");
                }
                else if (random_number == 3) {
                    printf("machine has chosen scissors\n");
                    printf("it's a draw \n");
                }
            }
        }
    }
}

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task2.h"
int main() {

    srand(time(NULL));
    int secret = rand() % 100;
    int guess = 0;
    printf("Please input your number: \n");
    scanf("%d", &guess);
    while(secret != guess) {
        if (turn(guess, secret) == -1) {
            printf("Sorry, your number is less than secret\n");
            printf("Please input your number: \n");
            scanf("%d", &guess);
            continue;
        }
        else {
            printf("Sorry, your number is bigger than secret\n");
            printf("Please input your number: \n");
            scanf("%d", &guess);
            continue;
        }
    }
    printf("You won! The number was %d \n", secret);
    return 0;
}

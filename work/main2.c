//
//  main.c
//  lab2Task2
//
//  Created by Igor T on 11/13/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {

    srand(time(NULL));
    int secret = rand() % 100;
    int guess = 0;
    printf("Please input your number: \n");
    scanf("%d", &guess);
    while (secret != guess) {
        if (secret <= guess) {
            printf("Your guess is bigger than secret, please input your number: \n ");
            scanf("%d", &guess);
        }
        else {
            printf("Your guess is smaller than secret, please input your number: \n ");
            scanf("%d", &guess);
        }
    }
    printf("You won! The number was %d \n", secret);
    return 0;
}

//
//  main.c
//  lab2Task1
//
//  Created by Igor T on 11/13/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task1.h"
#include <unistd.h>

int main(int argc, const char * argv[]) {
    float startHeight = 0;
    int currTime = 0;
    int counter = 0;
    printf("Please enter the height:\n");
    scanf("%f", &startHeight);
    printf("And time:\n");
    scanf("%d", &currTime);
    while (currTime != counter) {
        if (height(counter, startHeight) <= 0) {
            printf("Babah!\n");
            return 0;
        }
        printf("Bomb is at %f meters from earth at the %d seconds\n", height(counter, startHeight), counter);
        sleep(1);
        counter++;
    }
    return 0;
}

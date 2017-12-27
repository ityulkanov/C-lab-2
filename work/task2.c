//
//  task2.c
//  lab2Task2
//
//  Created by Igor T on 11/13/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task2.h"

int turn(int value, int secret) {
    
    if (value == secret) {
        return 0;
    } else if (value > secret) {
        return 1;
    }
    else if (value < secret) {
        return -1;
    }
    return -2;
}

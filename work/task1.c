//
//  task1.c
//  lab2Task1
//
//  Created by Igor T on 11/13/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task1.h"
#include <math.h>

float height(int currTime, int startHeight) {
    float g = 9.81;
    return startHeight - (g * pow(currTime, 2) / 2);
};



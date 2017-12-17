//
//  task5.c
//  lab2Task5
//
//  Created by Igor T on 12/17/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "task5.h"

#define N 10
#define M 8

char * password(char * line)
{
    srand(time(0));
    char temp [65] =  "abcdefghijklmnoprqstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    //    randomly picking one with a newly created variable
    int randomly = 0;

        for (int j = 0; j < M; j++) {
            randomly = (rand() % 62);
            //            going through the loop to write them down to the buffer
            line[j] = temp[randomly];
            
        }
    
    return line;
}

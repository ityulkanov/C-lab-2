//
//  task3.c
//  lab2task31
//
//  Created by Igor T on 11/27/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include "task3.h"
#include <string.h>
#include <stdio.h>

char * layout(char buf[], int line, int count) {
    int backCounter = count;
    int increment = 0;
    while (line <= count)
        {
            while (increment != line) {
                //            creating a blankspace infront of stars
                for (int j = 1; j < backCounter; j++) {
                    strcat(buf, " ");
                }
                //            creating a line of stars and blankspaces with the amount of lines
                increment++;
                
            }
            strcat(buf, "*");
        for (int i = 1; i < line; i++) {
            strcat(buf, "**");
        }
    line++;
    backCounter--;
    strcat(buf, "\n");
    }
    
return buf;
}

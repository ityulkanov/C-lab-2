//
//  main.c
//  lab2task6
//
//  Created by Igor T on 11/27/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task6.h"



int main() {
    char line[200];
    printf("Please enter the line you want to clean up\n");
    fgets(line, 200, stdin);
    printf("Here is cleaned line:\n%s\n", makeClear(line));
    return 0;
}

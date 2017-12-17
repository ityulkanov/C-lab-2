//
//  main.c
//  lab2Task5
//
//  Created by Igor T on 11/14/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#include "task5.h"
#define N 10
#define M 8
int main() {
    char buf [N-1];
    int i = 0;
//    creating a list of letters to generate pass from
    while ( i < N ) {
        password(buf);
        printf("The password number equals to %s\n", buf);
        sleep (1);
        i++;
    }
    
        
    return 0;
}

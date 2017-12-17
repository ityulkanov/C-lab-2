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
#define N 10
#define M 8
int main() {
    int i, j = 0;
    srand(time(0));
    char buf [N-1];
//    creating a list of letters to generate pass from
    char temp [65] =  "abcdefghijklmnoprqstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
//    randomly picking one with a newly created variable
    int randomly = 0;
    for (i = 0; i <= N; i++) {
        for (j = 0; j < M; j++) {
            randomly = (rand() % 62);
//            going through the loop to write them down to the buffer
            buf[j] = temp[randomly];
            
        }
       printf("The password number %d equals to %s\n", i, buf);
        
    }
    return 0;
}

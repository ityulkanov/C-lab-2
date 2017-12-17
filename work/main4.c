#include <stdio.h>
#include "task4.h"
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define LEN 10

int main() {
    srand(time(NULL));// should only be called once
//   char temp [36] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
    char line[LEN] = { 0 };

    for (int i = 0; i < LEN-1; i++) {
        if (i % 2) {
            line[i] = rand() % 10 + 48;
        } else {line[i] = rand() % 25 + 65;}
        
        
    }

    printf("the string before is: %s\n", line);
    process(line); 
    printf("the string after is %s\n", line);
    return 0;
    
}

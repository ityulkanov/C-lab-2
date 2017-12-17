//
//  main.c
//  lab2task7
//
//  Created by Igor T on 11/27/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char line[200];
    int i,j = 0;
    int count = 0;
    printf("Please enter your line: \n");
    fgets(line, 200, stdin);
    for (i='0'; i <='z'; i++)
    {
        for (j=0, count = 0; line[j];  j++)
            if (i == line[j]) {
                putchar(i);
                count++;
            }
        if (count > 0) {
            printf("-%d\n", count);
        }
    }
    return 0;
}

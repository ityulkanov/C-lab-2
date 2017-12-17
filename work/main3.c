//
//  main.c
//  lab2task31
//
//  Created by Igor T on 11/27/17.
//  Copyright © 2017 appmasters. All rights reserved.
//

#include <stdio.h>
#include "task3.h"

int main() {
    int line = 1;
    int count = 0;
    char buf[1000];
    printf("Please enter line count\n");
    scanf("%d", &count);
    printf("%s\n", layout(buf, line, count));
    return 0;
}

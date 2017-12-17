#include "task4.h"
#include <string.h>
#define LEN 10
char* process(char* line) {
    int i= 0;
    int j = LEN-1;
    char temp = '\0';
    //    first we are creating a loop that will check each of the chars in a line
    while(i != j) {
        //        checking if char is a letter, if so skipping it:
        if  (line[i] >= 65 && line[i] <= 90)
        {
            i++;
            continue;
        }
        
        else if (line[j] == '\0' ) {
            j--;
            continue;
        }
        
        else if (line[i] >= 48 && line[i] <= 57){
            temp = line[i];
            if (line[j] >= 48 && line[j] <= 57) {
                j--;
                continue; 
            }
            else {
                line[i] = line[j];
                line[j]= temp;
            }
        }
        i++;
        
    }
    return line;
}

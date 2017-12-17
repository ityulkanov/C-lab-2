#include "task6.h"
#include <string.h>

char * makeClear (char * line) {
    int i = 0;
    int inWord = 0;
    //    checking first if there is a blankspace in the beginning:
    while (line[0] == ' ') {
        int j = 0;
        while (line[j]) {
            line[j] = line[j+1];
            j++;
        }
        continue;
    }
 
//    then removing the blankspaces inside the array
    while (line[i]) {
        //start of the word
        if(line[i] != ' ' && inWord == 0 )
        {
            inWord = 1;
        }
        else if (line[i] == ' ' && inWord == 1)
        {
            inWord = 0;
            if (line[i+1] == ' ') {
                int j = i+1;
                while (line[j]) {
                    line[j] = line[j+1];
                    j++;
                }
               
                continue;
            }
        }
        else if (line[i] == ' ' && inWord == 0) {
            if (line[i+1] == ' ') {
                int j = i+1;
                while (line[j]) {
                    line[j] = line[j+1];
                    j++;
                }
            
                continue;
            }
        }
        i++;
      
    }
    int len = strlen(line);
    line[len-2] = '\0';
    
        return line;
}

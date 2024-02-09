#include "transformation.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct Transformation TRANS(char s[]) {
    struct Transformation tmp;
    char *check;
    char err[100] = "Invalid input string";
    tmp.result = strtol(s, &check, 10);
    
    if (*check != '\0') {
        strcpy(tmp.error, err);
        tmp.result = 0;
    } else {
        tmp.error[0] = '\0';
    }
    
    return tmp;
}
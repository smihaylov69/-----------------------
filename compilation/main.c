#include <stdio.h>
#include "transformation.h"

int main() {
    char s1[100] = "-123";
    char s2[100] = "12ab23";
    struct Transformation result1 = TRANS(s1);
    struct Transformation result2 = TRANS(s2);
    printf("Input: %s\nResult: %ld, Error: %s\n", s1, result1.result, result1.error);
    printf("Input: %s\nResult: %ld, Error: %s\n", s2, result2.result, result2.error);
    return 0;
}

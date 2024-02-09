#include <stdio.h>

#define DEBUG_PRINT(var) \
    printf("Variable: %s\n", #var); \
    printf("Value: %d\n", var); \
    printf("File: %s\n", __FILE__); \
    printf("Line: %d\n", __LINE__); \

int main() {
    int x = 42;
    DEBUG_PRINT(x);
    
    return 0;
}

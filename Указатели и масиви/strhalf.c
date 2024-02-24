#include <stdio.h>
#include <string.h>

void strhalf(char* str, char** pp) {
    int length = strlen(str);
    *pp = (str + (length / 2));
}

int main() {
    char str[] = "Ivan";
    char* p;

    strhalf(str, &p);

    printf("Half String: %s\n", p);

    return 0;
}



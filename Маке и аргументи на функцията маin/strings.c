#include <stdio.h>
#include "mystrings.h"

int strlenght(char s[]){
	int count = 0;
	for(int i = 0; s[i] != '\0'; i ++){
		count ++;
	}
	return count;
}
void strconcat(char s2[], char s3[]){
	int i = 0;
	int j = 0;
	while (s2[i] != '\0'){
		i ++;
	}
	while (s3[j] != '\0'){
		s2[i] = s3[j];
		i ++;
		j ++;
	}
	s2[i] = '\0';
}
int strcompare(char s4[], char s5[]){
    int i = 0;
    while(s4[i] != '\0' && s5[i] != '\0'){
        if(s4[i] > s5[i]) return -1;
        else if(s4[i] < s5[i]) return 1;
        i ++;
    }
    if (s4[i] == '\0' && s5[i] != '\0') {
        return 1;
    } else if (s4[i] != '\0' && s5[i] == '\0') {
        return -1;
    }

    return 0;
}
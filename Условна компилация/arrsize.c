#include <stdio.h>
#include <math.h>

#define ARRAY_SIZE 5

void main(){
    #if defined ARRAY_SIZE && (ARRAY_SIZE>0 && ARRAY_SIZE<11)
    int arr[ARRAY_SIZE];
    for(int i=0;i<ARRAY_SIZE;i++){
        arr[i]=pow(2,i);
        printf("%d\n",arr[i]);
    }
    #else
    printf("No array size supported by the application was entered");
    #endif
}
#include <stdio.h>
#define COLUMNS 4

void print_arr2d(int arr[][COLUMNS], int rows){
    for (int i = 0; i < rows; i ++){
        for (int j = 0; j < COLUMNS; j++){
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

void main(){
    int arr[][COLUMNS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8}
    };
    
    print_arr2d(arr, 2);
}
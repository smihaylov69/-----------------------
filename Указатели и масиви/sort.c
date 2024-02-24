# include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *arr, int arrlen){
    for (int i = 0; i < arrlen - 1; i++){
        for (int j = 0; j < arrlen - 1 - i; j++){
            if(*(arr + j) > *(arr + j + 1)){
                swap((arr +j), (arr + j + 1));
            }
        }
    }
}

void main(){
    int arr[5] = {6,9,6,9,69};
    sort(arr, 5);
    for ( int i =0; i < 5; i ++){
        printf("%d", *(arr + i));
    }
}
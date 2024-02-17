#include <stdio.h>

int swap(void *p1, void *p2){
    int help = *(int *)p1;

    *(int *)p1 = *(int *)p2;
    *(int *)p2 = help;
}

int compareasc(const void * const p1, const void * const p2){
    if(*(int *)p1 > *(int *)p2){
        return 1;
    }

    if(*(int *)p1 < *(int *)p2){
        return -1;
    }

    if(*(int *)p1 == *(int *)p2){
        return 0;
    }

}

int comparedesc(const void * const p1, const void * const p2){
    if(*(int *)p1 > *(int *)p2){
        return -1;
    }

    if(*(int *)p1 < *(int *)p2){
        return 1;
    }

    if(*(int *)p1 == *(int *)p2){
        return 0;
    }

}

void bubblesort(int arr[], int arrlen, int (*compare)(void *, void *), void (*swapelements)(void *, void *)){
    for (int i = 0; i < arrlen - 1; i++){
        for (int j = 0; j < arrlen - i - 1; j++){
            void *p1 = &arr[j];
            void *p2 = &arr[j+1];
            if(compare(p1, p2) == 1){
                swapelements(p1, p2);
            }
        }
    }
}


void main(){
    int a = 7;
    int b = 8;

    void *p1 = &a;
    void *p2 = &b;

    swap(p1, p2);

    printf("A: %d\n", a);
    printf("B: %d\n", b);

    int c = 9;
    int d = 8;


    const void * const p3 = &c;
    const void * const p4 = &d;
    
    int answer1 = compareasc(p3, p4);
    int answer2 = comparedesc(p3, p4);

    printf("The result from compareasc is: %d\n", answer1);
    printf("The result from comparedesc is: %d\n", answer2);

    int arr[5] = {1, 7, 2, 3, 4};
    
    bubblesort(arr, 5, compareasc, swap);
    
    printf("The sorted array by compareasc method:\n");
    for (int i = 0; i < 5; i++){
        printf("Element %d: %d\n", i+1, arr[i]);
    }

    bubblesort(arr, 5, comparedesc, swap);
    
    printf("The sorted array by compareadesc method:\n");
    for (int i = 0; i < 5; i++){
        printf("Element %d: %d\n", i+1, arr[i]);
    }



}
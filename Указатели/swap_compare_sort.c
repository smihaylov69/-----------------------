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

}
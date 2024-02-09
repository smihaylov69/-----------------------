#include <stdio.h>
#include "quadraticroots.h"

void main(){
    struct QuadraticRootsResult result1;
    struct QuadraticRootsResult result2;
    struct QuadraticRootsResult result3;

    int a1 = 3, b1 = 4, c1 = -5;
    float a2 = -3.4, b2 = 4.3, c2 = 5.5;
    double a3 = 3.4534, b3 = 4.5343, c3 = 5.3453;

    result1 = findroots(a1, b1, c1);
    result2 = findroots(a2, b2, c2);
    result3 = findroots(a3, b3, c3);

    if(result1.norealroots == 1){
        printf("no real roots");
    }else{
        printf("x1 = %lf\n", result1.x1);
        printf("x2 = %lf\n", result1.x2);
    }

    if(result2.norealroots == 1){
        printf("no real roots");
    }else{
        printf("x3 = %lf\n", result2.x1);
        printf("x4 = %lf\n", result2.x2);
    }

    if(result3.norealroots == 1){
        printf("no real roots");
    }else{
        printf("x5 = %lf\n", result3.x1);
        printf("x6 = %lf\n", result3.x2);
    }
}
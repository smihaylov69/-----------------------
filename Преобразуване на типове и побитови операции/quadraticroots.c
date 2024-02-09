#include <stdio.h>
#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(double a, double b, double c){
    double D = (b*b) - 4*(a*c);
    struct QuadraticRootsResult result; 

    if(D < 0){
        result.norealroots = 1;
        return result;
    }else{
        result.x1 = (-b + sqrtl(D))/2;
        result.x2 = (-b - sqrtl(D))/2;
        result.norealroots = 0;
        return result;
    }
}
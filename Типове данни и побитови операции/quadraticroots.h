#ifndef QUADRATICROOTS_h
#define QUDRATICROOTS_h

struct QuadraticRootsResult {
    double x1;
    double x2;
    int norealroots;
};

struct QuadraticRootsResult findroots(double a, double b, double c);

#endif
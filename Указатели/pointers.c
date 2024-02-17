#include <stdio.h>

void main(){
    double a;
    double b;

    printf("Enter the value for a:");
    scanf("%lf", &a);

    printf("Enter the value for b:");
    scanf("%lf", &b);



    double *p1 = &a;
    double *p2 = &b;

    printf("The adress of p1 is:%p\n", p1);
    printf("The adress of p2 is:%p\n", p2);

    printf("The value of p1 is:%lf\n", *p1);
    printf("The value of p2 is:%lf\n", *p2);
}
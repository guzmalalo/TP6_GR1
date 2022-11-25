#include <stdio.h>
#include "exo1.h"

/**
 * Exo 1 TP 5
 */
int main() {
    int a;
    float b;

    //avant
    printf("Avant\n");
    printf("a = %d b = %f \n", a, b);

    initialize(&a, &b);

    printf("Apres\n");
    printf("a = %d b = %f \n", a, b);

    return 0;
}

void initialize(int *pa, float *pb) {
    *pa = 0;
    *pb = 0;
    printf("adresse de pa %x \n", pa);
    printf("adresse de pa %p \n", pb);
}
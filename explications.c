#include <stdio.h>
#include "exo4.h"

struct Jouer {
    int mana;
    int pv;
};


int main (){

    int a = 42;
    float b = 42;
    struct Jouer monJouer = {10, 100};

    int * pint = &a;
    float * pfloat = &b;
    struct Jouer * pJouer = &monJouer;

    printf("Mana = %d \n", monJouer.mana);
    printf("Pv = %d \n", monJouer.pv);

    // par des pointeurs

    printf("Mana = %d \n", (*pJouer).mana);
    printf("Pv = %d \n", pJouer->pv);
    
    return 0;
}

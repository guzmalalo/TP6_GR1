#include <stdio.h>
#include "exo5.h"


int main(){

    Point monPointA = {1,11};
    Point monPointB = {2,22};

    // affichage
    affichePoint(&monPointA);
    affichePoint(&monPointB);

    // calcul
    swapPoint(&monPointA, &monPointB);

    // affichage
    printf("Après \n");
    affichePoint(&monPointA);
    affichePoint(&monPointB);

    return 0;
}

void affichePoint(Point* input){
    printf("x : %f , y : %f \n",input->x, input->y);
}

void swapPoint(Point* a, Point* b){
    Point temp = *a;
    *a = *b;
    *b = temp;
}



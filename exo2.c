#include <stdio.h>
#include "exo2.h"

int main(){
    // Déclaration
    int a, b;
    int q, r;

    // Initialisation de a et b
    printf("Rentrez la valeur de a : ");
    scanf("%d", &a);

    printf("Rentrez la valeur de b : ");
    scanf("%d", &b);

    // Calcul du quotient et du reste avec
    // une PROCEDURE
    pQR(a, b, &q, &r);

    // affichage des résultats.
    printf("[proc] Le reste est : %d \n", r);
    printf("[proc] Le quotient est : %d \n", q);

    // Calcul du quotient et du reste avec
    // une FONCTION
    r = fQR(a, b, &q);

    // affichage des résultats.
    printf("[fonc] Le reste est : %d \n", r);
    printf("[fonc] Le quotient est : %d \n", q);

    return 0;

}

void pQR(int a, int b, int* pq, int* pr){
    *pq = a/b;
    *pr = a%b;
}

int fQR(int a, int b, int* pq){
    int r;

    *pq = a/b;
    r = a%b;

    return r;
}
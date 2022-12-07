#include <stdio.h>
#include "exo4.h"


int main (){

    // déclaration
    int monTableau[NMAX] = {0};
    int sum = 0;
    int prod = 0;
    int n = 0;

    // demander la taille logique (nbre entrées)
    do {
        printf("Nombre des valeurs à saisir \n");
        scanf("%d", &n);
    }while( n > NMAX || n < 0);

    // remplissage
    remplissage(monTableau, n);

    // affichage
    affichage(monTableau, n);

    // calcul
    somProd(monTableau, n, &sum, &prod);

    // resultat
    printf("La somme est %d \n", sum);
    printf("Le produit est %d \n", prod);

    return 0;
}

void affichage(int monTableau[NMAX], int n ){
    for (int i = 0; i < n; ++i) {
        printf("La valeur %d est : %d\n",i, monTableau[i]);
    }
}

void remplissage(int monTableau[NMAX], int n ){
    for (int i = 0; i < n; ++i) {
        printf("Rentrez la valeur %d : ", i+1);
        scanf("%d", &monTableau[i]);
    }
}

void somProd(int monTableau[NMAX], int n, int* sum, int* prod){

    *sum = 0;
    *prod = 1;

    for (int i = 0; i < n; ++i) {
        *sum  += monTableau[i];
        *prod *= monTableau[i];
    }

}



#include <stdio.h>
#include "exo3.h"

/**
 * EXO 3 TP 6
 */
int main(){
    // Déclaration
    int a, b;

    // Initialisation de a et b
    printf("Rentrez la valeur de a : ");
    scanf("%d", &a);

    printf("Rentrez la valeur de b : ");
    scanf("%d", &b);

    //avant
    printf("Avant\n");
    printf("a = %d b = %d \n", a, b);

    // swap
    swap(&a,&b);

    //
    printf("Apres\n");
    printf("a = %d b = %d \n", a, b);

    return 0;
}

void swap(int* a, int* b){
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;

}

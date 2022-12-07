#ifndef TP6_EXO5_H
#define TP6_EXO5_H

typedef struct {
    float x;
    float y;
    float z;
} Point;


/**
 * Affichage un point à la console
 * @param input Structure de type Point
 */
void affichePoint(Point* input);

/**
 * Echange les valeurs de deux points
 * @param a Premier point (strcture)
 * @param b Deuxieme point (structure)
 */
void swapPoint(Point* a, Point* b);

#endif //TP6_EXO5_H

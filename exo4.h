#ifndef TP6_EXO4_H
#define TP6_EXO4_H

#define NMAX 25

/**
 * Affichage un tableau de taille nmax
 * @param monTableau
 * @param n
 */
void affichage(int monTableau[NMAX], int n );

/**
 * Remplissage d'un tabelau nmax
 * @param monTableau
 * @param n
 */
void remplissage(int monTableau[NMAX], int n );

/**
 * Calcule la somme et le produit des composantes
 * d'un tableau
 * @param monTableau [entrée] tableau int
 * @param n [entrée] taille logique
 * @param sum [sortie] somme des composantes (pointeur)
 * @param prod [sortie] produit des composantes (pointeur)
 */
void somProd(int monTableau[NMAX], int n, int* sum, int* prod);



#endif //TP6_EXO4_H

# TP 6 - Adresses, pointeurs et passage par adresse

> _Pour les exercices suivants, réfléchissez d'abord sur feuille afin de bien
> comprendre le fonctionnement en mémoire._

## Exercice 1

Modification de valeurs du programme appelant

- Écrire une **procédure** qui initialise à **0** un entier et un réel passés
  en paramètres.
- Écrire le programme principal qui appelle et teste cette procédure.

## Exercice 2

- Écrire une procédure et une fonction qui transmettent à la fonction appelante
  le quotient et le reste de la division d'un entier **a** par un entier **b**.
    - La procédure prend 4 paramètres (**a** (entrée), **b** (entrée),
      **quotient** (sortie) et **reste** (sortie)).
    - La fonction prend 3 paramètres (**a** (entrée), **b** (entrée),
      **quotient** (sortie)) et retourne le reste.
- Écrire un programme principal qui appelle et teste ces fonctions en affichant
  les résultats avant et après.
- Quelle est la différence entre ces deux versions ?

# Exercice 3

- Écrire un programme composé de deux entiers **a** et **b** de type **int**,
  qui affiche la valeur des deux variables, échange leur valeurs, et affiche
  leur nouvelle valeur.
- Transformer ce programme afin que l'échange des valeurs se fasse dans une
  procédure.

# Exercice 4

- Écrire une procédure qui calcule la somme et le produit des éléments d'un
  tableau passé en paramètre.
- Écrire le programme principal qui initialise le tableau avec des valeurs
  saisies au clavier par l'utilisateur (qui indique préalablement le nombre
  d'éléments à saisir), calcule la somme et le produit avec la procédure créée,
  et affiche les résultats.

# Exercice 5

Soit une structure **Point** contenant deux champs **x** et **y** de type
**float**.

- Écrire une procédure qui échange les valeurs **x** et **y** de deux structures
  **Point** passées par adresse.
- Écrire le programme principal qui saisit deux structures **Point** dans des
  variables, échange leur contenu en appelant la procédure créée, et affiche les
  valeurs des deux points.

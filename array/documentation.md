# Documentation du Code en C

## FR

### Introduction

Ce code en C, composé des fichiers `main.c`, `array.h`, et `array.c`, propose une implémentation basique d'une structure de données matricielle (`Array`). Il offre des fonctionnalités telles que l'initialisation de matrices, la modification d'éléments, l'addition et le produit de matrices, ainsi que d'autres opérations.

### Structure `Array`

La structure `Array` est définie comme une matrice à deux dimensions (`float**`). Elle contient le nombre de colonnes (`nbColumn`), le nombre de lignes (`nbLines`), et un pointeur vers la matrice elle-même (`array`).

### Fonctions d'Initialisation

1. **`arrayInit`**: Initialise une nouvelle matrice avec des dimensions spécifiées.
2. **`arrayValueInit`**: Initialise une nouvelle matrice avec des dimensions et une valeur spécifiées pour tous ses éléments.
3. **`arrayIdentityInit`**: Initialise une matrice identité carrée avec une taille spécifiée.
4. **`arrayHollowInit`**: Initialise une matrice avec des dimensions spécifiées, tous les éléments sont laissés non initialisés.

### Fonctions de Modification

1. **`arrayModif`**: Modifie un élément spécifique de la matrice.

### Fonctions d'Opérations Mathématiques

1. **`arrayAdd`**: Additionne deux matrices de même taille.
2. **`arrayProduct`**: Multiplie deux matrices conformes pour la multiplication matricielle.
3. **`arrayFloatProduct`**: Multiplie tous les éléments d'une matrice par un scalaire.

### Fonctions d'Opérations Additionnelles

1. **`arrayFlip`**: Effectue une opération de symétrie (flip) sur la matrice.

### Fonctions d'Affichage et de Suppression

1. **`arrayPrint`**: Affiche la matrice.
2. **`arrayRemove`**: Libère la mémoire allouée pour la matrice.

---

## Introduction

This C code, consisting of the files `main.c`, `array.h`, and `array.c`, provides a basic implementation of a matrix data structure (`Array`). It offers functionalities such as matrix initialization, element modification, addition and multiplication of matrices, as well as other operations.

## Structure `Array`

The `Array` structure is defined as a two-dimensional matrix (`float**`). It contains the number of columns (`nbColumn`), the number of lines (`nbLines`), and a pointer to the matrix itself (`array`).

## Initialization Functions

1. **`arrayInit`**: Initializes a new matrix with specified dimensions.
2. **`arrayValueInit`**: Initializes a new matrix with specified dimensions and a specified value for all its elements.
3. **`arrayIdentityInit`**: Initializes a square identity matrix with a specified size.
4. **`arrayHollowInit`**: Initializes a matrix with specified dimensions, leaving all elements uninitialized.

## Modification Functions

1. **`arrayModif`**: Modifies a specific element of the matrix.

## Mathematical Operation Functions

1. **`arrayAdd`**: Adds two matrices of the same size.
2. **`arrayProduct`**: Multiplies two conforming matrices for matrix multiplication.
3. **`arrayFloatProduct`**: Multiplies all elements of a matrix by a scalar.

## Additional Operation Functions

1. **`arrayFlip`**: Performs a symmetry (flip) operation on the matrix.

## Display and Deletion Functions

1. **`arrayPrint`**: Displays the matrix.
2. **`arrayRemove`**: Frees the memory allocated for the matrix.

---

**Author** : Zeug555  
**Last Update** : 17/11/23
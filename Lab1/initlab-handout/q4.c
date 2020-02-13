/*
 * Init Lab - q4.c
 * 
 * Ecole polytechnique de Montreal, 2018
 */

#include <stdint.h>

#include "q4/libq4.h"

// TODO
// Si besoin, ajouter ici les directives d'inclusion
// -------------------------------------------------
#include <stdlib.h>

// -------------------------------------------------

uint64_t question4A(uint64_t x) {
    return (int)(42*x*x+10*x+1322);
}

void question4B(uint64_t x, uint64_t *result) {
    *result = (42*x*x+10*x+1322);

}

uint64_t *question4C(uint64_t x) {
    uint64_t* ptr = calloc(1,sizeof(uint64_t));
    *ptr = (42*x*x+10*x+1322);
    return ptr;


}

void question4D(uint64_t x, uint64_t **resultPtr) {
    uint64_t* ptr = calloc(1,sizeof(uint64_t));
    *ptr = (42*x*x+10*x+1322);
    *resultPtr = ptr;

}

/*
 * Attention: Vous devez impérativement obtenir le résultat du calcul de
 * l’expression demandée par un appel à la fonction _question4B (et non
 * question4B!) définie dans le fichier q4/libq4.h, que nous avons programmée
 * et qui a la même signature que votre fonction question4B.
 */
uint64_t question4E(uint64_t x) {
    uint64_t* ptr = calloc(1,sizeof(uint64_t));
    _question4B(x,ptr);
    return *ptr;
}
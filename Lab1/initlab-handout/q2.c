/*
 * Init Lab - q2.c
 * 
 * Ecole polytechnique de Montreal, 2018
 */

// TODO
// Si besoin, ajouter ici les directives d'inclusion
// -------------------------------------------------
#include <unistd.h>
#include <stdio.h>
#include <string.h>


// -------------------------------------------------

/*
 * Vous devez imprimer le message indiqué dans l'énoncé:
 * - En exécutant un premier appel à printf AVANT l'appel à write
 * - Sans utiliser la fonction fflush
 * - En terminant chaque ligne par le caractère '\n' de fin de ligne
 */
void question2() {
    printf("b992aa0d3d28 (printed using printf)");
    write(STDOUT_FILENO,"b992aa0d3d28 (printed using write)\n",strlen("b992aa0d3d28 (printed using write)\n"));
    printf("\n");

}
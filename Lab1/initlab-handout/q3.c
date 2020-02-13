/*
 * Init Lab - q3.c
 * 
 * Ecole polytechnique de Montreal, 2018
 */

// TODO
// Si besoin, ajouter ici les directives d'inclusion
// -------------------------------------------------
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <unistd.h>
#include <stdio.h>
#include <string.h>

// -------------------------------------------------

/*
 * Vous devez imprimer dans le fichier indiqué dans l'énoncé le message suivant:
 *  
 * This file has been opened by process ID CURRENT_PID.
 * 
 * - En terminant le message par le caractère '\n' de fin de ligne
 * - En remplaçant CURRENT_PID par le PID du processus qui exécutera votre solution
 */
void question3() {
    FILE *f = fopen("q3Output-340af0643153.txt","w");
    if (f==NULL){
        printf("erreur");
        exit(1);
    }
    const char *texte = "This file has been opened by process ID ";
    //const char *PID = (char*)getpid();
    fprintf(f,"%s",texte);
    fprintf(f,"%d",getpid());
    fprintf(f,"%s\n",".");
    fclose(f);
}
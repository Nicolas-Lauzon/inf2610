/*
 * Clone Lab - part1.c
 * 
 * Ecole polytechnique de Montreal, 2018
 */

// TODO
// Si besoin, ajouter ici les directives d'inclusion
// -------------------------------------------------
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// -------------------------------------------------

void part1() {
    // TODO
    char buffer[256];
    sprintf(buffer, "%d", getpid());


    pid_t child = fork();

    char buffer2[256];
    sprintf(buffer2, "%d", child);
    
    if(child == 0){
        execl("./part1/demarcus", "demarcus", "--processId", buffer, NULL);
        
    }
    execl("./part1/laurena", "laurena", "--processId", buffer2, NULL);
    
    
    
    exit(0);
    exit(0);
    
}
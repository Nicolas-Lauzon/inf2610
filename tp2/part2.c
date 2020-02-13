/*
 * Clone Lab - part2.c
 * 
 * Ecole polytechnique de Montreal, 2018
 */

#include "libclonelab.h"

#include <stdio.h>

// TODO
// Si besoin, ajouter ici les directives d'inclusion
// -------------------------------------------------
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>


// -------------------------------------------------

#define PART2_OUTPUT_FILE_PATH "part2Output.txt"

void part2() {
    // Ouverture du fichier de sortie pour la question 2.3
    FILE* part2OutputFile = fopen(PART2_OUTPUT_FILE_PATH, "a");

    // TODO
    

    if(fork()==0){
        //1.1
        registerProc(1,1,getpid(),getppid());
        char buffer[256];
        sprintf(buffer, "%d", getppid());
        execl("./part2/level1.1","level1.1",buffer,NULL);

        if(fork()==0){
            //2.1
            registerProc(2,1,getpid(),getppid());
            exit(0);
        }
        wait(NULL);
        exit(0);
    }
    wait(NULL);

    if(fork()==0){
        //1.2
        registerProc(1,2,getpid(),getppid());
        char buffer2[256];
        sprintf(buffer2, "%d", getppid());
        execl("./part2/level1.2","level1.2",buffer2,NULL);
        if(fork()==0){
            //2.2
            registerProc(2,2,getpid(),getppid());
            exit(0);
        }
        if(fork()==0){
            //2.3
            registerProc(2,3,getpid(),getppid());
            exit(0);
        }
        while(wait(NULL) > 0);   
        exit(0);
    }
    wait(NULL);

    if(fork()==0){
        //1.3
        registerProc(1,3,getpid(),getppid());
        char buffer3[256];
        sprintf(buffer3, "%d", getppid());
        execl("./part2/level1.3","level1.3",buffer3,NULL);
        if(fork()==0){
            //2.4
            registerProc(2,4,getpid(),getppid());
            exit(0);
        }
        wait(NULL);
        exit(0);
    }
    wait(NULL);

    if(fork()==0){
        //1.4
        registerProc(1,4,getpid(),getppid());
        char buffer4[256];
        sprintf(buffer4, "%d", getppid());
        execl("./part2/level1.4","level1.4",buffer4,NULL);
        if(fork()==0){
            //2.5
            registerProc(2,5,getpid(),getppid());
            exit(0);
        }
        wait(NULL);
        exit(0);
    }
    wait(NULL);
    
}
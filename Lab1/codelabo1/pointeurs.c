#include <stdio.h>
#include <stdlib.h>

int main() {

    int nombre = 13;
    int* refNombre = &nombre;
    *refNombre = 12;
    printf("%d\n", nombre);

    int* pointeurAAllouer = calloc(1, sizeof(int));
    printf("pointeurAAllouer:%d\n", pointeurAAllouer);

    *pointeurAAllouer = 4;
    printf("pointeurAAllouer:%d\n", *pointeurAAllouer);
    return 0;
}
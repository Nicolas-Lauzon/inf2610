#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main() {
    printf("Salut de printf");
    write(STDOUT_FILENO, "Salut de write\n", strlen("Salut de write\n"));
    printf("\n");
}

#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

char* NIZI[] = {NULL};

int main() {
    char* niz = zdruzi(NIZI, "/");
    printf("<%s>\n", niz);

    exit(0);
    return 0;
}

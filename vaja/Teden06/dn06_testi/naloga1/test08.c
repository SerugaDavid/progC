
#include <stdio.h>
#include <stdlib.h>

#include "naloga1.h"

char* NIZI[] = {"abc", "ghi", "", NULL};

int main() {
    char* niz = zdruzi(NIZI, "def");
    printf("<%s>\n", niz);

    exit(0);
    return 0;
}

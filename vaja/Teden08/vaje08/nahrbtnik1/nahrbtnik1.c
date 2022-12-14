#include <stdio.h>
#include <stdlib.h>

int max_int(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int max_cena2(int V, int n, int * prostornine, int * cene, int curr_V, int curr_cena, int curr_ind) {
    if (curr_V > V)
        return 0;
    if (curr_V == V)
        return curr_cena;
    int max_price = curr_cena;
    int tmp;
    for (int i = curr_ind + 1; i < n; i++) {
        tmp = max_cena2(V, n, prostornine, cene, curr_V + prostornine[i], curr_cena + cene[i], i);
        max_price = max_int(max_price, tmp);
    }
    return max_price;
}

void print_arr(int * arr, int n) {
    for (int i = 0; i < n; i++)
        printf("%d, ", arr[i]);
    printf("\n");
}

int main() {
    /*  ma dela sam na pou
        sam je časovna zahtevnost n^2
        testi 6-10 so super veliki,
        6 - 50  ->  2500
        7 - 100 ->  10000
        8 - 100 ->  10000
        9 - 500 ->  250000
        10- 1000->  1000000
    */
    int V, n;
    scanf("%d", &V);
    scanf("%d", &n);

    int * prostornine = calloc(n, sizeof(int));
    int * cene = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", &prostornine[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &cene[i]);
    
    int cena;
    cena = max_cena2(V, n, prostornine, cene, 0, 0, -1);
    printf("%d\n", cena);
    return 0;
}
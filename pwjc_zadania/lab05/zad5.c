#include <stdio.h>

void na_binarny(int n) {
    if (n > 1) {
        na_binarny(n / 2);
    }
    printf("%d", n % 2);
}

int main() {
    int liczba;

    printf("Podaj liczbe calkowita (n >= 0): ");
    scanf_s("%d", &liczba);

    if (liczba < 0) {
        printf("Liczba musi byc wieksza lub rowna 0.\n");
    }
    else {
        printf("Reprezentacja binarna liczby %d to: ", liczba);
        na_binarny(liczba);
        printf("\n");
    }

    return 0;
}

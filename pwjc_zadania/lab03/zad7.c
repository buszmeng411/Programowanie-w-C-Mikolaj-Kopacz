#include <stdio.h>

int main() {
    int n;
    printf("Podaj rozmiar macierzy: ");
    scanf("%d", &n);

    int macierz[n][n];

    printf("Podaj elementy macierzy ):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &macierz[i][j]);
        }
    }

    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += macierz[i][i];
    }

    printf("Suma element�w przek�tnej g��wnej wynosi: %d", sum);

    return 0;
}
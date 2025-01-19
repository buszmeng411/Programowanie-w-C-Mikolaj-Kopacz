#include <stdio.h>

int ciag(int n) {
    if (n == 1) {
        return -1;
    }
    return -ciag(n - 1) * (n - 2);
}

int main() {
    int n;

    printf("Podaj numer wyrazu ciagu : ");
    scanf_s("%d", &n);

    if (n <= 0) {
        printf("Numer musi byc wiekszy od zera.\n");
    }
    else {
        printf("n-ty wyraz ciagu dla n = %d wynosi: %d\n", n, ciag(n));
    }

    return 0;
}

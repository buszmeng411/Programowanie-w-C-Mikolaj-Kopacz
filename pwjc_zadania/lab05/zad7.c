#include <stdio.h>


void na_binarne(int n) {
    if (n == 0) {
        return;
    }
    na_binarne(n / 2);
    printf("%d", n % 2);
}

int main() {
    int number;

    printf("Podaj liczbe w systemie dziesietnym: ");
    scanf_s("%d", &number);

    if (number == 0) {
        printf("0");
    }
    else {
        na_binarne(number);
    }
    printf("\n");

    return 0;
}

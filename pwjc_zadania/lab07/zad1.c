#include <stdio.h>

struct Trojkat {
    float bok1, bok2, bok3;
};

float obwod(struct Trojkat t) {
    return t.bok1 + t.bok2 + t.bok3;
}

int main() {
    struct Trojkat t;

    printf("Podaj dlugosci bokow trojkata: ");
    scanf_s("%f %f %f", &t.bok1, &t.bok2, &t.bok3);

    printf("Obwod trojkata: %.2f\n", obwod(t));
    return 0;
}

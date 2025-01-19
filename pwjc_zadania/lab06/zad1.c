#include <stdio.h>

int main() {
    int a, b, c;
    int* ptr_a = &a, * ptr_b = &b, * ptr_c = &c;

    printf("Podaj wartosc zmiennej a: ");
    scanf_s("%d", ptr_a);

    printf("Adres zmiennej a: %p, Wartosc zmiennej a: %d\n", (void*)ptr_a, *ptr_a);

    printf("Podaj dwie liczby b i c do obliczen roznicy i sredniej:\n");
    scanf_s("%d %d", ptr_b, ptr_c);

    int roznica = *ptr_b - *ptr_c;
    float srednia = (*ptr_b + *ptr_c) / 2.0f;

    printf("Roznica: %d\n", roznica);
    printf("Srednia: %.2f\n", srednia);

    return 0;
}

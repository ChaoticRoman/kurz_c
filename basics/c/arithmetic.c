#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;

    double x = 1;
    double y = 2;

    int vysledek = a + b;
    printf("a + b = %d\n", vysledek);

    printf("a - b = %d\n", a - b);

    printf("a * b = %d\n", a * b);

    printf("a / b = %.32f\n", a / b);

    printf("a / b = %d\n", a / b);

    printf("a % b = %d\n", a % b);

    printf("x / y = %.32f\n", x / y);

    printf("x / y = %d\n", x / y); // Pozor, pro vypis interpretujeme double jako int!
}

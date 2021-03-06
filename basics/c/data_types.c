#include <stdio.h>

int main() {
    int cislo = -42;
    float tretina_f = 1.0 / 3;
    double tretina_d = 1.0 / 3;
    long double tretina_ld = 1.0L / 3.0;
    char pismenko = 'x';
    const char retezec[] = "Hello world!";

    printf("cislo = %d\n", cislo);
    printf("tretina_f = %.32f\n", tretina_f);
    printf("tretina_d = %.32f\n", tretina_d);
    printf("tretina_ld = %.32Lf\n", tretina_ld);
    printf("pismenko = '%c'\n", pismenko);
    printf("pismenko = '%d'\n", pismenko);
    printf("retezec = \"%s\"\n", retezec);

    printf("char: %d\n", sizeof(char));
    printf("int: %d\n", sizeof(int));
    printf("long int: %d\n", sizeof(long int));
    printf("float: %d\n", sizeof(float));
    printf("double: %d\n", sizeof(double));
    printf("long double: %d\n", sizeof(long double));
}

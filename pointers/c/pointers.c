#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 42;
    int* p = &a;

    printf(" a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf("\n");

    a = -1;

    printf(" a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf("\n");

    *p = 1;

    printf(" a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf("\n");

    p = malloc(sizeof(int));

    printf(" a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf("\n");

    *p = 7;

    printf(" a = %d\n", a);
    printf("*p = %d\n", *p);
    printf("&a = %p\n", &a);
    printf(" p = %p\n", p);
    printf("\n");

    int * q;
    printf("q = %p\n", q);
    printf("*q= %d\n\n", *q);

    *q = 666;
    printf("q = %p\n", q);
    printf("*q= %d\n", *q);
}

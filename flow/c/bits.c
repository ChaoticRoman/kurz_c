#include <stdio.h>
#include "bin.h"

int main() {
    char a = 0b00001111;
    char b = 0b00111100;

    printf("a = %s = %d\n", bin(a), a);
    printf("b = %s = %d\n", bin(b), b);
    printf("\n");

    printf("     a = %s\n", bin(a));
    printf("    ~a = %s\n", bin(~a));
    printf("\n");

    printf("     b = %s\n", bin(b));
    printf("    ~b = %s\n", bin(~b));
    printf("\n");

    printf("     a = %s\n", bin(a));
    printf("     b = %s\n", bin(b));
    printf(" a & b = %s\n", bin(a & b));
    printf("\n");

    printf("     a = %s\n", bin(a));
    printf("     b = %s\n", bin(b));
    printf(" a | b = %s\n", bin(a | b));
    printf("\n");

    printf("     a = %s\n", bin(a));
    printf("     b = %s\n", bin(b));
    printf(" a ^ b = %s\n", bin(a ^ b));
    printf("\n");

    printf("     b = %s\n", bin(b));
    printf("b >> 3 = %s\n", bin(b >> 3));
    printf("\n");

    printf("     b = %s\n", bin(b));
    printf("    !b = %s\n", bin(!b));
    printf("\n");
    
    printf("    !0 = %s\n\n", bin(!0));

    printf("     a = %s\n", bin(a));
    printf("     b = %s\n", bin(b));
    printf("a && b = %s\n", bin(a && b));
    printf("\n");

    printf("     a = %s\n", bin(a));
    printf("     b = %s\n", bin(b));
    printf("a || b = %s\n", bin(a || b));
    printf("\n");
}

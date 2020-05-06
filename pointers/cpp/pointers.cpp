#include <iostream>

int main() {
    int* p;

//    printf("*p = %d\n", *p);
    printf(" p = %p\n\n", p);

//    *p = 5;

//    printf("*p = %d\n", *p);
    printf(" p = %p\n\n", p);

    p = new int;

    printf("*p = %d\n", *p);
    printf(" p = %p\n\n", p);

    *p = 42;

    printf("*p = %d\n", *p);
    printf(" p = %p\n", p);
}

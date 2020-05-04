#include <stdio.h>

int main() {
    int CEST = 2;  // CEST = UTC+2
    int EDT = -4;  // EDT = UTC-4

    int cas_CEST = 21;
    int cas_UTC = (cas_CEST - CEST) % 24;
    int cas_EDT = (cas_UTC + EDT) % 24;

    printf("Kdyz je v Praze (CEST) %d:00, jedna se o %d:00 UTC.\n", cas_CEST, cas_UTC);
    printf("V New Yorku (EDT) pak je %d:00.\n", cas_EDT);
}

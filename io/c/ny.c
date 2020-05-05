#include <stdio.h>

int main() {
   const int CEST = 2;
   const int EDT = -4;

   printf("Kolik hodin je v Praze (HH:MM)?\n");

   int hodina_CEST, minuta;
   scanf("%d:%d", &hodina_CEST, &minuta);

   int hodina_EDT = (24 + hodina_CEST - CEST + EDT) % 24;

   printf("Tak jestli je v Praze %02d:%02d, tak v New Yorku je %02d:%02d.\n",
     hodina_CEST, minuta, hodina_EDT, minuta);
}

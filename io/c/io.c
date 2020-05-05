#include <stdio.h>

int main() {
   char jmeno[10], nalada[10];

   printf("POCITAC: Ahoj, jak Ti rikaji?\nTY: ");
   scanf("%s", jmeno);

   printf("POCITAC: Tesi me, %s! Jak se mas?\nTY: ", jmeno);
   scanf("%s", nalada);

   printf("POCITAC: To me tesi, ze se mas %s! Musim jit, %s... Mej se!\n", nalada, jmeno);

   return 0;
}

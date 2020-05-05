#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   const int CEST = 2;
   const int EDT = -4;

   cout << "Kolik hodin je v Praze (HH:MM)?\n";

   int hodina_CEST, minuta;
   scanf("%d:%d", &hodina_CEST, &minuta);

   int hodina_EDT = (24 + hodina_CEST - CEST + EDT) % 24;

   cout << "Tak jestli je v Praze ";
   cout << setw(2) << setfill('0') << hodina_CEST << ":";
   cout << setw(2) << setfill('0') << minuta << ", ";
   printf("tak v New Yorku je %02d:%02d.\n", hodina_EDT, minuta);
}

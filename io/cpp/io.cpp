#include <iostream>

using namespace std;

int main() {
   string jmeno, nalada;

   cout << "POCITAC: Ahoj, jak Ti rikaji?\nTY: ";
   cin >> jmeno;

   cout << "POCITAC: Tesi me, " << jmeno << "! Jak se mas?\nTY: ";
   cin >> nalada;

   cout << "POCITAC: To me tesi, ze se mas " << nalada << "! "
       << "Musim jit, " << jmeno << "... Mej se!\n";

   return 0;
}

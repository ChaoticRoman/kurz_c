#include <iostream>
#include <fstream>
using namespace std;

int main () {
  ofstream soubor("priklad.txt", ios::app);
  if (soubor.is_open()) {
    soubor << "Nova linka\n";
    soubor.close();
    cout << "Pridali jsme linku! Soubor ted obsahuje:\n";
  }
  else
    cout << "Neco se pokazilo";

  string radek;
  ifstream soubor2("priklad.txt");
  if (soubor2.is_open()) {
    while (getline(soubor2, radek)) {
      cout << radek << '\n';
    }
    soubor2.close();
  }
  else
    cout << "Nejde nam otevrit soubor :-(\n";

  return 0;
}

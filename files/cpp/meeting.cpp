#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
  ifstream f("casy.txt");

  if (!f.is_open()) {
    cout << "Neco se pokazilo :-(\n";
  }

  int moje_hodina, minuta;
  char c;
  cout << "V kolik je meeting Tveho casu (HH:MM)?" << endl;
  cin >> moje_hodina >> c >> minuta;

  string jmeno;
  int muj_posun, posun, hodina;
  f >> muj_posun;

  cout << "Tvuj zona je UTC";
  if (muj_posun >= 0) cout << "+";
  cout << muj_posun << "." << endl;

  while (true) {
    f >> jmeno >> posun;
    if (f.eof()) break;

    hodina = (24 + moje_hodina - muj_posun + posun) % 24;

    cout << jmeno << " je v zone UTC";
    if (posun >= 0) cout << "+";
    cout << posun << ". ";
    cout << "Bude mit ";
    cout << std::setfill('0') << std::setw(2) << hodina << ":";
    cout << std::setfill('0') << std::setw(2) << minuta << " hodin." << endl;
  }

  f.close();
}

#include <iostream>

using namespace std;

int main() {
    int cislo = -42;
    float tretina_f = 1.0 / 3;
    double tretina_d = 1.0 / 3;
    long double tretina_ld = 1.0L / 3.0;
    char pismenko = 'x';
    const char retezec[] = "Hello world!";

    cout.precision(32);

    cout << "cislo = " << cislo << endl;
    cout << "tretina_f = " << tretina_f << endl;
    cout << "tretina_d = " << tretina_d << endl;
    cout << "tretina_ld = " << tretina_ld << endl;
    cout << "pismenko = '" << pismenko << "'" << endl;
    cout << "retezec = \"" << retezec << "\"" << endl;
}

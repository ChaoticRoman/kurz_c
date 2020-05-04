#include <iostream>

using namespace std;

int main() {
    int a = 1;
    int b = 2;

    double x = 1;
    double y = 2;


    cout.precision(32);

    int vysledek = a + b;
    cout << "a + b = " << vysledek << endl;

    cout << "a - b = " << a - b << endl;

    cout << "a * b = " << a * b << endl;

    cout << "a / b = " << a / b << endl;

    cout << "a % b = " << a % b << endl;

    cout << "x / y = " << x / y << endl;
}

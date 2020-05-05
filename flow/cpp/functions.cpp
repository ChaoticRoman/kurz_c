#include <iostream>
#include <cmath>

using namespace std;


void hvezdicky(int kolikrat) {
    for (int i=0; i < kolikrat; ++i) {
        cout << "*";
    }
    cout << endl;
}


double uhlopricka(double a, double b) {
    return sqrt(a*a + b*b);
}


int main() {
    for (int i=1; i<9; i++)
       hvezdicky(i);

    cout << endl;

    cout << "Uhlopricka ctverce o strane 1 je " << uhlopricka(1, 1) << ".\n";
}

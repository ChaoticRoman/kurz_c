#include <iostream>

using namespace std;

int main() {
    int CEST = 2;  // CEST = UTC+2
    int EDT = -4;  // EDT = UTC-4

    int cas_CEST = 21;
    int cas_UTC = (cas_CEST - CEST) % 24;
    int cas_EDT = (cas_UTC + EDT) % 24;

    cout << "Kdyz je v Praze (CEST) " << cas_CEST << ":00, jedna se o " << cas_UTC << ":00 UTC." << endl;
    cout << "V New Yorku (EDT) pak je " << cas_EDT << ":00.\n";
}

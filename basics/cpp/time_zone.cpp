#include <iostream>

using namespace std;

int main() {
    constexpr int CEST = 2;  // CEST = UTC+2
    constexpr int EDT = -4;  // EDT = UTC-4

    int cas_CEST = 1;
    int cas_UTC = (24 + cas_CEST - CEST) % 24;
    int cas_EDT = (24 + cas_UTC + EDT) % 24;

    cout << "Kdyz je v Praze (CEST) " << cas_CEST << ":00,"
        << " jedna se o " << cas_UTC << ":00 UTC." << endl
        << "V New Yorku (EDT) pak je " << cas_EDT << ":00.\n";
}

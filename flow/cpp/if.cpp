#include <iostream>
#include <string>

using namespace std;

int main() {
    if (1) {
        cout << "1. Toto se vypise!\n";
    }

    if (0) {
        cout << "2. Toto se nevypise!\n";
    } else {
        cout << "3. Toto se vypise!\n";
    }

    if (-1) {
        cout << "4. Toto se vypise!\n";
    }

    if (0) {
        cout << "5. Toto se nevypise!\n";
    }

    if (666) {
        cout << "6. Toto se vypise!\n";
    }

    cout << endl << endl;

    int cislo;
    cout << "Myslim si cislo, hadej jake: ";
    cin >> cislo;

    switch (cislo)
    {
        case 42:
            cout << "To je ono!";
            break;
        case 41:
        case 43:
            cout << "Tesne vedle, skoda!";
            break;
        case 32:
            cout << "Tohle cislo mam sice moc rad, ale bohuzel. ";
        default:
            cout << "Sama voda!";
    }

    cout << endl << endl;

    string zeme;
    cout << endl << "Napis jmeno zeme: ";
    cin >> zeme;

    if (zeme == "Slovensko")
        cout << "Tatry mam moc rad!";
    else if (zeme == "Cesko")
        cout << "Tam je krasne!";
    else if (zeme == "Norsko")
        cout << "Fjordy jsou moc krasne!";
    else
        cout << "Tam to neznam :-(";

    cout << endl;

}

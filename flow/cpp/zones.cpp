#include <iostream>

using namespace std;

int ziskej_casovy_posun()
{
    cout << "1  UTC" << endl;
    cout << "2  CET (UTC+1)" << endl;
    cout << "3 CEST (UTC+2)" << endl;
    cout << "4  EST (UTC-5)" << endl;
    cout << "5  EDT (UTC-4)" << endl;

    int zona;
    while (true)
    {
        cout << "Vyber zonu: ";
        cin >> zona;
        if (zona >= 1 && zona <= 5)
            break;
        cout << "Vybirej jen z tech uvedenych a napis cislo!" << endl;
    }

    switch (zona) {
        case 1: return 0;
        case 2: return +1;
        case 3: return +2;
        case 4: return -5;
        case 5: return -4;
    }
    return 0;
}

int main() {
   cout << "Z jakeho casoveho pasma?" << endl;
   int posun_z = ziskej_casovy_posun();
   cout << "Do jakeho casoveho pasma?" << endl;
   int posun_do = ziskej_casovy_posun();

   cout << "Jaky cas (HH:MM)?\n";

   int hodina_z, minuta;
   scanf("%d:%d", &hodina_z, &minuta);

   int hodina_do = (24 + hodina_z - posun_z + posun_do) % 24;
   printf("To odpovida %02d:%02d v cilove zone.\n", hodina_do, minuta);
}

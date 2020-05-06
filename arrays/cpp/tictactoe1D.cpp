#include <iostream>
#include <random>

#define N 10

#define volne '_'
#define hrac 'x'
#define pocitac 'o'
#define remiza '!'

using namespace std;


void tiskni_pole(const char pole[N]) {
     for(int i=0; i<N; ++i) cout << i;
     cout << endl;
     for(int i=0; i<N; ++i) cout << pole[i];
     cout << endl;
}


char konec(const char pole[N]) {
    /* Vraci znacku viteze, nebo '_' pokud je jeste volne misto
    a nikdo nevyhral, nebo '!' pro remizu. */
    bool volne_misto = false;

    if (pole[0] == volne || pole[1] == volne) volne_misto = true;

    for(int i=2; i<N; ++i) {
        // Pozor: https://en.cppreference.com/w/cpp/language/operator_precedence
        if (pole[i-2] == pole[i-1] && pole[i-1] == pole[i]
            && (pole[i] == hrac || pole[i] == pocitac))
            return pole[i];

        if (pole[i] == volne)
            volne_misto = true;
    }

    if (volne_misto) return volne;

    return remiza;
}


void tah_pocitace(char * pole)
{
     // https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
     static random_device rd;
     static mt19937 gen(rd());
     static uniform_int_distribution<> random_field(0, N-1);

     int i;
     do {
         i = random_field(gen);
     } while(pole[i] != volne);

     pole[i] = pocitac;
}


int main()
{
     char pole[N];
     for(int i=0; i<N; ++i) pole[i] = volne;

     int index;
     char stav = volne;
     while (stav == volne)
     {
         tiskni_pole(pole);

         cout << "Kam hrajes? ";
         cin >> index;
         pole[index] = hrac;
         stav = konec(pole);
         if (stav != volne) break;

         tah_pocitace(pole);
         stav = konec(pole);
     }

     tiskni_pole(pole);

     if (stav == remiza)
         cout << "Remiza!\n";
     else
         cout << "Vyhral " << stav << "!\n";

     return 0;
}

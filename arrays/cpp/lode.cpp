#include <iostream>
#include <random>

using namespace std;

const int N = 10;
const int pocet_lodi = 8;


void ukaz(const char pole[N][N])
{
    cout << ' ';
    for (int sloupec = 0; sloupec < N; sloupec++)
        cout << sloupec;
    cout << endl;

    for (int radek = 0; radek < N; radek++)
    {
        cout << radek;
        for (int sloupec = 0; sloupec < N; sloupec++)
        {
            cout << pole[radek][sloupec];
        }
        cout << endl;
    }
}


int main()
{
    char pole[N][N];
    char stav_hry[N][N];

    for (int radek = 0; radek < N; radek++)
    {
        for (int sloupec = 0; sloupec < N; sloupec++)
        {
            pole[radek][sloupec] = ' ';
            stav_hry[radek][sloupec] = '?';
        }
    }

    // https://en.cppreference.com/w/cpp/numeric/random/uniform_int_distribution
    static random_device rd;
    static mt19937 gen(rd());
    static uniform_int_distribution<> random_field(0, N-1);


    for (int lod=0; lod < pocet_lodi; lod++)
    {
        int radek, sloupec;
        do {
            radek = random_field(gen);
            sloupec = random_field(gen);
        } while(pole[radek][sloupec] != ' ');

        pole[radek][sloupec] = 'L';
    }

    ukaz(pole);  // ODSTRANIT
    ukaz(stav_hry);
    
    /* DODELAT */

    return 0;
}

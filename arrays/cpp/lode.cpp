#include <iostream>
#include <random>

using namespace std;

constexpr int N = 5;
constexpr int pocet_lodi = 4;


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

    int radek, sloupec;
    for (int lod=0; lod < pocet_lodi; lod++)
    {
        do {
            radek = random_field(gen);
            sloupec = random_field(gen);
        } while(pole[radek][sloupec] != ' ');

        pole[radek][sloupec] = 'L';
    }

    //ukaz(pole);  // ODSTRANIT
    ukaz(stav_hry);
    
    int pocet_zasahu = 0;
    while (pocet_zasahu < pocet_lodi)
    {
        while (true)
        {
            cout << "Zadej souradnice (radek a sloupec oddeleny mezerou):\n";
            cin >> radek >> sloupec;
            cout << "Miris na radek " << radek << " a sloupec " << sloupec << endl;
            if (radek < 0 || sloupec < 0 || radek >= N || sloupec >= N)
                cout << "Strilej jen do pole!\n";
            else if (stav_hry[radek][sloupec] != '?')
                cout << "Tam uz si strilel!\n";
            else
                break;
        }
        if (pole[radek][sloupec] == ' ')
        {
            cout << "Voda!\n";
            stav_hry[radek][sloupec] = ' ';
        }
        if (pole[radek][sloupec] == 'L')
        {
            cout << "Zasah!\n";
            stav_hry[radek][sloupec] = '*';
            ++pocet_zasahu;
        }
        ukaz(stav_hry);
    }
    cout << "Gratulace!\n";
    
    return 0;
}

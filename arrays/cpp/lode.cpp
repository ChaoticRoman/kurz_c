#include <iostream>
#include <random>

using namespace std;

constexpr int N = 8;
constexpr int pocet_lodi = 6;


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
    static uniform_int_distribution<> random_direction(0, 3);

    int radek, sloupec, radek2, sloupec2, smer;
    for (int lod=0; lod < pocet_lodi; lod++)
    {
        bool ok;
        do {
            ok = false;
            radek = random_field(gen);
            sloupec = random_field(gen);
            smer = random_direction(gen);
            switch(smer)
            {
                case 0: sloupec2 = sloupec; radek2 = radek + 1;
                case 1: sloupec2 = sloupec; radek2 = radek - 1;
                case 2: sloupec2 = sloupec + 1; radek2 = radek;
                case 3: sloupec2 = sloupec - 1; radek2 = radek;
            }
            if (sloupec2 >= 0 && sloupec2 < N // TODO: pridat podminku ze se lode nesmi dotykat
                && radek2 >= 0 && radek2 < N)
                ok = pole[radek][sloupec] == ' '
                    && pole[radek2][sloupec2] == ' ';
        } while(!ok);

        pole[radek][sloupec] = 'L';
        pole[radek2][sloupec2] = 'L';
    }

    //ukaz(pole);
    ukaz(stav_hry);
    
    int pocet_zasahu = 0;
    while (pocet_zasahu < 2*pocet_lodi)
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

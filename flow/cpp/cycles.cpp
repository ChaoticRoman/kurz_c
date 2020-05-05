#include <iostream>

using namespace std;

int main() {
    for(int i=0; i < 5; ++i) {
        cout << "Opakovani c. " << i << endl;
    }

    string text = "";
    while (text != "susenka") {
        cout << "Dej mi susenku!" << endl;
        cin >> text;
    }
}

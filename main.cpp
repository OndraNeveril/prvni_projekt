//prvni program v C++
#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    cout << "Zadej cele cislo: ";
    int zadano;
    cin >> zadano;
    cout << "Jeho dvojnasobek je " << 2 * zadano << endl;

    cout << "Zadej dve cela cisla: ";
    int m, n, vysledek;
    cin >> m >> n;
    cout << "Vetsi je " << ((m > n) ? m : n) << endl;

    /* slo by i pøes if else*/

    return 0;
}

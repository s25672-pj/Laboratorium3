#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float x;
    float y;
    float suma, roznica, iloczyn;
    float iloraz;
    cout << "Podaj pierwsza liczbe: ";
    cin >> x;
    cout << "Podaj druga liczbe: ";
    cin >> y;
    suma = x + y;
    roznica = x - y;
    iloczyn = x * y;
    cout << "Suma podanych liczb to: " << setprecision(2) << suma << endl;
    cout << "Roznica podanych liczb to: " << setprecision(2) << roznica << endl;
    cout << "Iloczyn podanych liczb to: " << setprecision(2) << iloczyn << endl;
    if (y == 0) {
        cout << "Jako dzielnik podano liczbe 0, nie mozna wykonac dzielenia";
    }
    else {
        iloraz = x / y;
        cout << "Iloraz podanych liczb to: " << setprecision(2) << iloraz << endl;
    };

    return 0;

}

#include <iostream>
#include <iomanip>

using namespace std;

int C(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
    int wiersze;
    cout << "Trojkat Pascala\n" << "Podaj liczbe wierszy: ";
    cin >> wiersze;
    
    for (int n = 0; n <= wiersze; n++)
    {
        cout << setw(2) << n << setw(3 * (wiersze - n)) << "";
        for (int k = 0; k <= n; k++)
            cout << setw(6) << C(n, k);
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    char znak;
    cout << "Podaj jakis znak z klawiatury, az do momentu gdy trafisz poszukiwany: ";
    cin >> znak;
    while (znak != 't') {
        cout << znak;
        cin >> znak;


    }
    cout << "Podales poszukiwany znak t";
    return 0;

}

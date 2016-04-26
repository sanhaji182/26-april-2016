#include <iostream>

using namespace std;

int main()
{
    int angka,jumlah;
    cout << "Masukan angka = ";
    cin >> angka;
    jumlah=1;
    cout << "Faktorial = ";
    while (angka>0)
    {
        cout << angka << "x" ;
        jumlah=jumlah*angka;
        angka--;
    }
    cout << " = " << jumlah;
}

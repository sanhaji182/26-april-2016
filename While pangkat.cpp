#include <iostream>

using namespace std;

int main()
{
    int i,angka,pangkat,jumlah;
    cout << "Masukkan angka = ";
    cin >> angka;
    cout << "Masukkan pangkat = ";
    cin >> pangkat;
    jumlah=1;
    i=1;
    while (i<=pangkat)
    {
        jumlah=jumlah*angka;
        i++;
    }
    cout << "Jumlah = "<<jumlah;
}

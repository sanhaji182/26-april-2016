#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Menampilkan deret bilangan genap kurang dari atau sama dengan n" << endl;
    cout << "Masukkan nilai n = " ;
    cin >> n;

    while (n>=0)
    {
                if (n%2==0)
        {
        cout << n << " ";
        n=n-2;
    }
    else {
        n=n-1;
        cout << n << " ";
         n=n-2;
    }
    }
    return 0;
}

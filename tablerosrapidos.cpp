#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int filas, columnas;
    cin >> filas >> columnas;

    for (int i = 0; i < filas; ++i)
    {
        for (int j = 0; j < columnas; ++j)
        {
            if ((i + j) % 2 == 0)
                cout << ".";
            else
                cout << "X";
        }
        cout<<endl;
    }
}

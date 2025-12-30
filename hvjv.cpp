#include <bits/stdc++.h>
using namespace std;
main (){
    string texto = "Hola Mundo!";
    // Convierte a mayúsculas
    transform(texto.begin(), texto.end(), texto.begin(), ::toupper);
    cout << "Texto en mayúsculas: " << texto << endl;

    // Convierte a minúsculas
    transform(texto.begin(), texto.end(), texto.begin(), ::tolower);
    cout << "Texto en minúsculas: " << texto << endl;
}

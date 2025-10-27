#include <bits/stdc++.h>
using namespace std ;
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0) return false;
    return true;
}

int sumaDigitos(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}
bool esPrimoAditivo(int n) {
    if (!esPrimo(n)) return false;
    if (n < 10) return true; // Primo de un solo dígito
    return esPrimoAditivo(sumaDigitos(n));
}

int main() {
    int n;
    while (cin>>n) {
        cout<<(esPrimoAditivo(n) ? "true" : "false") << endl;
    }
    return 0;
}


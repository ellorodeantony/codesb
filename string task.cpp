#include <bits/stdc++.h>
using namespace std;
main() {
    string a;
    cin >> a;

    for (char c : a) {
        c = tolower(c); // para que funcione con mayúsculas también
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u'&& c != 'y') {
            cout << "." << c;
        }
    }


}

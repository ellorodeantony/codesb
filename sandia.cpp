#include <bits/stdc++.h>
using namespace std;
main() {
    long long n;
    while (cin >> n) {
        long long k = n + 1;
        if (k == 1) {
            cout << 0 << "\n";
        } else if (k % 2 == 0) {
            cout << k / 2 << "\n";
        } else {
            cout << k << "\n";
        }
    }
}

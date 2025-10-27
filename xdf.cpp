#include <bits/stdc++.h>
using namespace std ;
main () {
int n,a; cin >> n>>a;
int e = 0;
while (n)
{
    e = (e << 1);
    e = e ^ (n & 1);
    n >>= 1;
}
cout << e;

}

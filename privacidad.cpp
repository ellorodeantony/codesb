#include <bits/stdc++.h>
using namespace std;
main ()
{
int k,n;cin>>n>>k;
int men  = (k / 3) + bool(k % 3);
int may = (k / 2) + bool(k % 2);
if (n >= men && n <= may)
{
    while (n != 0)
    {
        if (k == 1)
        {
            cout << 'X';
            n--, k--;
        }
        else if (k / 3 < n)
        {
            cout << "X-";
            n--, k -= 2;
        }
        else if (k % n == 0)
        {
            cout<< "-X-";
            n--,k=k-3;
        }
    }
}
        else
            cout << "*";
}

#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--) {
        string a;
        getline(cin, a);
        for (int i = 0; i < a.size(); ++i) {
            if (i == 0)
                cout << (char)toupper(a[i]);
            else if (i % 2 == 0)
                cout << (char)toupper(a[i]);
            else
            cout<<(char)tolower(a[i]);
        }
        cout<<endl;
    }
}

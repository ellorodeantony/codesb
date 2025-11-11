#include <bits/stdc++.h>
using namespace std ;
 main() {
    char c;cin>>c;
    if (c>='a'&&c<='z')
        c=c-'a'+'A';
    else if(c>='A' && c <= 'Z') {
        c=c-'A'+'a';
    }
    cout << c << endl;
}


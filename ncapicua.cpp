#include <bits/stdc++.h>
using namespace std ;
main () {
    long long a, ori, rev = 0;
    cin>>a;
    ori=a;
    while (a>0) {
        rev=rev*10+a%10;
    a/=10;
    }
    if (ori==rev)
        cout<<"S"<<endl;
    else
        cout<<"N"<<endl;
}


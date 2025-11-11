#include <bits/stdc++.h>
using namespace std ;
main() {
    int a,x;
    int total= 0;
    cin>>a;
    for (int i=1;i<a;i++) {
        cin>>x;
        total+=x;
    }
    cout<<a*(a+1)/2-total;
}

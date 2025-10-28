#include <bits/stdc++.h>
using namespace std;
main() {
    int a,suma=0;
    cin>>a;
    for (int i=3;i<a;i+=3) {
    suma += i;
    }
    cout<<suma<<endl;
}

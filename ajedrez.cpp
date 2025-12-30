#include <bits/stdc++.h>
using namespace std;
main () {
 int a,total=0;
    cin>>a;
    for (int i=1;i<=a;i++) {
    total+=(a-i+1)*(a-i+1);
    }
    cout<<total<<' '<<endl;
}

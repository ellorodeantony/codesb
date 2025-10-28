#include <bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0); cout.tie(0);
#define endl '\n'
using namespace std;
void solve() {
 int n;cin>>n;
 while(n--){
 int a,total=0;
    cin>>a;
    for (int i=1;i<=a;i++) {
    total+=(a-i+1)*(a-i+1);
    }
    cout<<total<<' '<<endl;
}
}
main () {
    INI
solve();
}

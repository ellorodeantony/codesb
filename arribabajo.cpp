#include <bits/stdc++.h>
using namespace std;
main () {
int a,b;cin>>a>>b;
if (a>b){
for(int i=a;i>=b;i--)
    cout<<i<<endl;
}
else
    for(int j=b;j>=a;j--)
    cout<<j<<endl;
}


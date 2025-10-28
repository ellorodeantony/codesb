#include <bits/stdc++.h>
#define query int n;cin>>n; while(n--)
#define INI cin.tie(0)->sync_with_stdio(0); cout.tie(0);
#define endle '\n'
using namespace std ;
main (){
long long a;cin>>a;
    for (int i = 0; i<=a; i++) {
        long long suma=0,temp = a;
        while(temp>0){
            int d=temp%10;
            suma+=d*d;
            temp/=10;
        }
        a = suma;
        if (a == 1)
            cout << "Feliz"<<endle;
            else
    cout << "Triste"<<endle;
}
}

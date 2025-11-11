#include <bits/stdc++.h>
#define fore(i,a,b) for (int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
int m[5][5];
void pattern6()
{
    int posx, posy;
    fore(i, 0, 4)
        fore(j, 0, 4)
        {
            cin >> m[i][j];
            if (m[i][j] == 1)
                posx = i + 1, posy = j + 1;
        }
                cout<<abs(3-posx)+abs(3-posy);
}
main() {
    long long K,N;
    cin>>K>>N;
    long long min_len=2 * K-1;
    long long diff=N-min_len;
    if (diff<0&&diff>2) {
        cout<<"*"<<endl;
    }
    string base="";
    for (long long i=1;i<=min_len;i++) {
        if (i%2==1)base+='X';
        else base += '-';
    }
    string result;
    if (diff==0) {
        result=base;
    }
    else if (diff==1) {
        result = "-" + base;
    }
     else
    {
        result = "-" + base + "-";
    }
    cout << result << endl;
}



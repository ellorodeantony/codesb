#include<bits/stdc++.h>
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define readi3(a,b,c) int a,b,c;cin>>a>>b>>c;
#define readi4(a,b,c,d) int a,b,c,d;cin>>a>>b>>c>>d;
#define query readi(n) while(n--)
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define readv(v,a) readi(a) vi v(a);for(auto &e:v)cin>>e;
#define reads(a) string a;cin>>a;
#define endl '\n'
using namespace std;
typedef long long ll;
void solve()
{
    query {
        int a,b,c;cin>>a>>b>>c;
        vector<int>v(a);
        int con=0;
        for (int i=0;i<a; i++) {
            cin>>v[i];
            con+=v[i];
        }
        if (b>=con&&(b-con)%c==0)
        cout<<"YES"<<'\n';
        else
      cout<<"NO"<<'\n';
    }
}
main()
{
    INI
    solve();
}

#include<bits/stdc++.h>
using namespace std;
#define INI cin.tie(0)->sync_with_stdio(0); cout.tie(0);
#define query int n;cin>>n;while(n--)
void solve()
{
    query
    {
        double p,p1,p2,p3,f;
        cin>>p>>p1>>p2>>p3>>f;
        vector<double>v={p1,p2,p3};
        double pb=*min_element(v.begin(),v.end());
        double pp=(p1+p2+p3-pb)/2.0;
        double nf=0.15*p+0.45*pp+0.40*f;
        if (nf>50.0)
            cout<<"Si";
        else
            cout<<"No"<<'\n';
    }
}
main()
{
    INI
    solve();
    return 0;
}

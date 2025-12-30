#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define INI cin.tie(0)->sync_with_stdio(0);cout.tie(0);
#define int ll
#define readi(a) int a;cin>>a;
#define readi2(a,b) int a,b;cin>>a>>b;
#define fore(i,a,b) for(int i=a;i<=b;i++)
#define forei(i,a,b) for(int i=a;i>=b;i--)
#define endl '\n'
typedef long long ll;
const int LOG=19;
void solve(){
readi2(n,q)
vector<vector<int>> up(n+1,vector<int>(LOG));
vector<int> depth(n+1,0);
up[1][0]=1;
fore(i,2,n){
readi(boss)
up[i][0]=boss;
depth[i]=depth[boss]+1;
}
fore(j,1,LOG-1){
fore(i,1,n){
up[i][j]=up[up[i][j-1]][j-1];
}
}
while(q--){
readi2(a,b)
if(depth[a]>depth[b]){
int diff=depth[a]-depth[b];
fore(j,0,LOG-1)if((diff>>j)&1)a=up[a][j];
}else if(depth[b]>depth[a]){
int diff=depth[b]-depth[a];
fore(j,0,LOG-1)if((diff>>j)&1)b=up[b][j];
}
if(a==b){
cout<<a<<'\n';
}else{
forei(j,LOG-1,0){
if(up[a][j]!=up[b][j]){
a=up[a][j];
b=up[b][j];
}
}
cout<<up[a][0]<<'\n';
}
}
}
main(){
INI
solve();
}

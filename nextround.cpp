#include <bits/stdc++.h>
using namespace std ;
main(){
int a,b;cin>>a>>b;
int c=0;
vector<int>vec1(a);
for(int i=0;i<=a-1;i++){
    cin>>vec1[i];
}
for(int j=0;j<=a-1;j++){
 if(vec1[j]>=vec1[b-1] and vec1[j]>0)
    c++;
}
cout<<c;
}


#include <bits/stdc++.h>
using namespace std ;
main ()
{
    int n;cin>>n;
int con=0;
    while(n--){
int a,b,c;cin>>a>>b>>c;
if (a==1 and b==1)
    con++;
    else if(c==1 and a==1)
    con++;
    else if(c==1 and b==1)
        con++;
}
cout<<con;
}

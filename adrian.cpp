#include <bits/stdc++.h>
using namespace std;
void secuencias() {
{
    int a;
    while (cin>>a)
    {
        for(int i=a-1;i>=1;i--)
            cout<<i<<" ";
        cout<<0<<endl;
    }
}

}
void iglesias(){
    int a,b,ad,al,r;
    while (cin>>a>>b>>ad>>al>>r) {
        int res=b-a;
        int ct=res*20;
        int dt=ad+al+r;
        if (dt>=ct)
            cout<<"Te salvaste Adrian!!"<<endl;
        else
            cout<<"Bueno, toca llorar"<<endl;
    }
}
void sumatorias(){
int a;
while (cin>>a)
cout<<a*(a+1)/2<<endl;
}
void carolina()
{
    long long a;
    int b;
    while (cin>>a>>b) {
        bool si=false;
        long long tmp=a;
        while (tmp>0) {
            if (tmp % 10 == b) {
                si=true;
                break;
            }
            tmp/=10;
        }
        if(si)
            cout<<"Duerme tranquila Carolina"<<endl;
        else
            cout<<"Despiertaaa!!!"<<endl;
    }
}
main () {
carolina();
}

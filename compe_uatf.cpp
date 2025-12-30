#include <bits/stdc++.h>
using namespace std;
void ej1(){
int n;cin>>n;
    int cua=0;
    int cir=0;
    int tri=0;
while (n--){
    string a;cin>>a;
    if(a=="cuadrado")
        cua++;
    else if(a=="circulo")
        cir++;
        else if(a=="triangulo")
            tri++;
}
    cout<<"CUADRADOS="<<cua<<" CIRCULOS="<<cir<<" TRIANGULOS="<<tri;
}
void ej2() {
    int n;
    cin>>n;
    double d;
    for (int i=0;i<n; i++) {
        cin>>d;
        double m=0.2*d*d;

        if (floor(m) == m)
            cout<<fixed<<setprecision(0)<<m;
        else
            cout<<fixed<<setprecision(2)<<m;
        if (i<n-1)cout<< " ";
    }
    cout << endl;
}
void ej3(){
int a;cin>>a;
int ap=0;
int re=0;
int exa=0;
vector<int>vec1(a);
for(int i=0;i<=a-1;i++){
    cin>>vec1[i];
    if (vec1[i]>51)
        ap++;
    else if(vec1[i]<40)
        re++;
        else if(vec1[i]>40 and vec1[i]<50)
            exa++;
}
cout<<"APROBADAS="<<ap<<" EXAMEN="<<exa<<" REPROBADAS="<<re;
}
void ej4(){
int a;cin>>a;
int ma=INT_MIN;
int me=INT_MAX;
int prom;
vector<int>vec1(a);
for(int i=0;i<=a-1;i++){
    cin>>vec1[i];
        if (vec1[i]<me)
        me=vec1[i];
    else if(vec1[i]>ma)
        ma=vec1[i];
    prom=vec1[i]+prom;
}
    cout<<prom<<" ";
cout<<me<<" "<<ma<<" ";
}
main(){
ej4();
}

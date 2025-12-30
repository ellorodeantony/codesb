#include <bits/stdc++.h>
using namespace std;
void problema1()
{
    int a;
    cin>>a;
    for(int i=1; i<=a; i++)
    {
        if (i%2==1)
            cout<<i<<endl;
    }
}
void ej2 ()
{
    int a;
    cin>>a;
    if(a%2==0)
cout<<"SI";
else
    cout<<"NO";
    }
void ej4 (){
int p,b;cin>>b,p;
int c=0;
if(b*3>p*2)
    c++;
else
    c--;
cout<<c;
}
main () {
int r, c;
    while (cin >> r >> c) {
        int parity_dot = (r - 1 + c - 1) % 2;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {

                if ( (i + j) % 2 == parity_dot )
                    cout << '.';
                else
                    cout << 'X';

            }
            cout << "\n";
        }
    }
}


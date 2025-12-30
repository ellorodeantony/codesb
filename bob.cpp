#include <bits/stdc++.h>
using namespace std;
main()
{
 int a;
    string b;
    cin >> a >> b;

    vector<vector<char>> vec1(a, vector<char>(a, ' '));

    int c = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 2; j++)
            vec1[j][i] = b[c++ % b.size()];

        for (int j = i; j < a; j++)
            vec1[a - i - 1][j] = b[c++ % b.size()];
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
            cout << vec1[i][j] << " ";
        cout << "\n";
    }
}


#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;

    if (S[0] == S[1] && S[1] == S[2])
    {
        cout << 1 << endl;
    }
    else if (S[0] != S[1] && S[1] != S[2] && S[2] != S[0])
    {
        cout << 6 << endl;
    }
    else
    {
        cout << 3 << endl;
    }
}

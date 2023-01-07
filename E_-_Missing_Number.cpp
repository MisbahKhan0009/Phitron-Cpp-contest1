#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n, t;
    long long int total = 0, got = 0;
    cin >> t;

    for (int i = 1; i <= t - 1; i++)
    {
        cin >> n;
        got += n;
    }
    for (int i = 1; i <= t; i++)
    {

        total += i;
    }

    cout << total - got;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    if (n !=2 && n !=3)
    {
        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
        for (int i = n; i >= 1; i -= 2)
        {
            cout << i << " ";
        }
    }
    else
    {
        cout << "NO SOLUTION";
    }
    return 0;
}

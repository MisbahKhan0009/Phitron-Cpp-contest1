#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 1;
    sort(a.begin(), a.end());
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            ans++;
        }
    }

    cout << ans;
    return 0;
}

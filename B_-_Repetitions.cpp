#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string dna;
    getline(cin, dna);
    int maxi = 1;
    int count = 1;
    char chari = dna[0];
    for (int i = 1; i < dna.size(); i++)
    {
        if (dna[i] == chari)
        {
            count++;
        }
        else
        {
            maxi = max(maxi, count);
            count = 1;
            chari = dna[i];
        }
    }
    maxi = max(maxi, count);
    cout << maxi << endl;
    return 0;
}

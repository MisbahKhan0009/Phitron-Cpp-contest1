#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int moves = 0;
    long long int prev;
    cin >> prev;
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < prev)
        {

            moves += prev - x;
        }
        else
        {

            prev = x;
        }
    }
    cout << moves << endl;
    return 0;
}

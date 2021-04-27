#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        for (int i = 0; i < k - 3; i++)
            cout << 1 << " ";
        if ((n - k + 3) % 2 != 0)
        {
            cout << 1 << " " << (n - k + 3 - 1) / 2 << " " << (n - k + 3 - 1) / 2;
        }
        else if ((n - k + 3) % 2 == 0 && (n - k + 3) % 4 != 0)
        {
            cout << 2 << " " << (n - k + 3 - 2) / 2 << " " << (n - k + 3 - 2) / 2;
        }
        else
        {
            cout << (n - k + 3) / 2 << " " << (n - k + 3) / 4 << " " << (n - k + 3) / 4;
        }
        cout << endl;
    }
    return 0;
}
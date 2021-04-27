#include <bits/stdc++.h> 
                         
#include <iostream>      
#define ll long long    
#define INF 2000000000
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> even;
        vector<int> odd;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
            {
                even.push_back(x);
            }
            else
            {
                odd.push_back(x);
            }
        }
        for (int i = 0; i < odd.size(); i++)
        {
            cout << odd[i] << " ";
        }
        for (int i = 0; i < even.size(); i++)
        {
            cout << even[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
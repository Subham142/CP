#include <bits/stdc++.h>
# include <iostream>
#define ll long long
#define INF 2000000000
using namespace std;
//cout<<fixed<<setprecision(12)<<ans<<endl;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n, k;
        cin >> n >> k;
 
        unordered_map<int, int> mp;
        int uni = 0;
        int ma = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ma = max(ma, x);
            mp[x]++;
            if (mp[x] == 1)
            {
                uni++;
            }
        }
        int me = INT_MAX;
        for (int i = 0; i < ma + 1; i++)
        {
            if (!mp[i])
            {
                me = i;
                break;
            }
        }
        if (me < ma && k != 0)
        {
            int avg = ((me + ma + 1) / 2);
            mp[avg]++;
            if (mp[avg] == 1)
            {
                uni++;
            }
        }
        else if (me > ma && k != 0)
        {
            uni += k;
        }
        cout << uni << "\n";
        
    }
 
    return 0;
}
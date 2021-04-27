#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main()
{
    int mini;
    int maxi;
    int n,m;cin>>n>>m;
    maxi = ((n-(m-1))*(n-(m-1)-1)/2);
    int sz=n/m;
    int rem=n%m;
    mini = rem*(sz+1)*(sz)/2 + (m-rem)*(sz)*(sz-1)/2;
    cout<<mini<<" "<<maxi<<"\n";
    return 0;
}

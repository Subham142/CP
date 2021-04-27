#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int a,b,n;cin>>a>>b>>n;
 int s[] = {a, b, b - a, -a, -b, a - b};
 cout<<(s[(n-1)%6]%mod +mod)%mod;
return 0;
}
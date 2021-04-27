#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){
//Solve
int n,k;cin>>n>>k;
ll ans=1;
for(int i=0;i<k;i++)
{
    ans=(ans*n)%mod;
}
cout<<ans<<endl;
}
return 0;
}
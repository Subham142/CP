#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n;cin>>n;
int ans=n+n-1;
int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
ans+=arr[0];
 for(int i=0;i<n-1;i++){
     ans+=abs(arr[i]-arr[i+1]);
 }

 cout<<ans;

return 0;
}
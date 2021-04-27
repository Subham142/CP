#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n,l;cin>>n>>l;
 double a[n+10];
 for(int i=0;i<n;i++){
     cin>>a[i];
 }
 sort(a,a+n);
 double ans=0;
 ans=max(ans,a[0]);
 ans=max(ans,l-a[n-1]);
 for(int i=0;i<n-1;i++){
     double dis=(a[i+1]-a[i]);
     dis=dis/2.00;
     ans=max(ans,dis);
 }

cout<<fixed<<setprecision(10)<<ans<<endl;
return 0;
}
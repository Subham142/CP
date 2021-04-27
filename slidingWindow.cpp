#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n,k;cin>>n>>k;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int i=0,j=0;
int sum=0,ans=INT_MIN;
while(j<n){
sum +=arr[j];
if(j-i+1<k){
    j++;
}else if(j-i+1==k){
 ans =max(ans,sum);
 sum -= arr[i];
 i++;
 j++;
}
}
cout<<ans<<endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n, sum=0,sum2=0,arr[100],ans=0;
 cin>>n;
 for(int i=0;i<n;i++){
     cin>>arr[i];
     sum+=arr[i];
 }
 sort(arr,arr+n,greater<int>());
 for(int j=0;j<n;j++){
     sum2+=arr[j];
     ans++;
     sum-=arr[j];
     if(sum2>sum)
     break;
 }
 cout<<ans;
return 0;
}
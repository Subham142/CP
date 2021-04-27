#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){
//Solve
int n,k;cin>>n>>k;
int size=(n-k)+k/2;
cout<<size<<endl;
for(int i=k+1;i<=n;i++){
    cout<<i<<" ";
}
for(int i=(k+1)/2;i<k;i++){
    cout<<i<<" ";
}
cout<<endl;
}
return 0;
}
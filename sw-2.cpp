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
queue<int> ans;
while(j<n){
    //if (-ve) push it
if(arr[j]<0){
    ans.push(arr[j]);
}

if(j-i+1<k){
    j++;
}else if(j-i+1 ==k){
   //calulation
    if(ans.empty()){
        cout<<0<<" ";
    }else{
        cout<<ans.front()<<" ";
    }

    //slide the window
    if(arr[i]==ans.front()){
        ans.pop();
    }
    i++;
    j++;
}
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
string s;cin>>s;
int k;cin>>k;
int arr[30];
int m=0;
for(int i=0;i<26;i++){
    cin>>arr[i];
    m=max(m,arr[i]);
}
int ans=0;
for(int i=0;i<s.length();i++){
    ans+=(i+1)*arr[s[i]-'a'];
}
int val=s.length()+1;
while(k--){
ans+=val*m;
val++;
}

cout<<ans;
return 0;
}
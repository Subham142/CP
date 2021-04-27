#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
string s,p;cin>>s>>p;
int k=p.length();
int n=s.length();
unordered_map<char,int> type;
for(int i=0;i<k;i++){
    type[p[i]]++;
}
int count =type.size();
int ans=0;
int i=0,j=0;
while(j<n){
if(type.find(s[j]) != type.end()){
    type[s[j]]--;
}
if(type[s[j]]==0){
    count--;
}
if(j-i+1<k){
    j++;
}else if(j-i+1 ==k){
if(count==0){
    ans++;
}
if(type.find(s[i]) != type.end()){
    type[s[i]]++;
}
if(type[s[i]]==1){
    count++;
}
i++;
j++;
}
}
cout<<ans<<endl;
return 0;
}
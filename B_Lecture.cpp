#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n,m;cin>>n>>m;
map<string, string> lang;
for(int i =0;i<m;i++){
  string x,y;cin>>x>>y;
    if(x.length()>y.length()){
    lang[x]=y;
    }
    else{
    lang[x]=x;
    }
}
for(int i=0;i<n;i++){
    string s;
    cin>>s;
    cout<<lang[s]<<" ";
}
cout<<endl;
return 0;
}
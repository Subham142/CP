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
    int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
      if(2*k==n){
          cout<<"NO\n";
          continue;
      }
      string a="",b="";
      for(int i=0;i<k;i++){
          a +=s[i];
      }

      for(int i=n-1;i>=n-k;i--){
          b +=s[i];
      }

      if(a==b){
          cout<<"YES\n";
      }else{
          cout<<"NO\n";

      }
 }
return 0;
}
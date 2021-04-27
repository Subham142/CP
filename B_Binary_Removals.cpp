#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){
//Solve
string s;cin>>s;
bool flag1=0,flag2=0;

if(is_sorted(s.begin(),s.end())){
    cout<<"YES\n";
    continue;
}
else
    {
        int y=0;
        for(int i=s.length()-1;i>0;i--){
            if(s[i]=='0' && s[i-1]=='0'){
                y=i-1;
                flag1=1;
                break;
            }
        }

        if(!flag1){
              cout<<"YES\n";
              continue;
        }

        for(int i=y;i>0;i--){
            if(s[i]=='1' && s[i-1]=='1'){
                y=i-1;
                flag2=1;
                break;
            }
        }
        if(!flag2){
              cout<<"YES\n";
              
        }else{
            cout<<"NO\n";
             
        }

    }
}
return 0;
}
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
int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int one=0;
    int zero=0;
    vector<pair<int,int>>x;
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]=='1') one++;
        else zero++;
        if(one == zero){
            x.push_back({j,i});
            j=i+1;
        }
    }
    for(auto i : x){
        int start=i.first;
        int end=i.second;
        if(a[start]==b[start]) continue;
        else{
            for(int j=start;j<=end;j++){
                if(a[j]=='0') a[j]='1';
                else a[j]='0';
            }
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            cout<<"NO"<<"\n";
            continue;
        }
    }
    cout<<"YES"<<"\n";
    continue;
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t

int check(int a,int b){
    int x=(a+b)/2;
    return x;
}

int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){
//Solve
int n,k1,k2,w,b;cin>>n>>k1>>k2>>w>>b;

if(check(k1,k2)>=w && check(n-k1,n-k2)>=b){
    cout<<"YES\n";
}else{
    cout<<"NO\n";
}
}
return 0;
}
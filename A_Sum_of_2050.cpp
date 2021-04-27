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
ll n;cin>>n;
if(n%2050 !=0){
    cout<<-1<<endl;
    continue;
}
else{
    n=n/2050;
    int ans=0;
    while(n!=0){
        ans+=n%10;
        n /=10;
    }
    cout<<ans<<endl;
}

}
return 0;
}
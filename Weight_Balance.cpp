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
int w1,w2,x1,x2,m;cin>>w1>>w2>>x1>>x2>>m;
int w=w2-w1;
int r1=m*x2;
int r2=m*x1;

if(w>=r2 && w<=r1){
cout<<1<<endl;
}else{
cout<<0<<endl;
}
}
return 0;
}
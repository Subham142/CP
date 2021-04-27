#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
bool isPerfectSquare(long double x)
{
 
  if (x >= 0)
  {
 
    long long sr = sqrt(x);
 
    return (sr * sr == x);
  }
 
  return false;
}

int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);


int t;
cin>>t;
while(t--){
//Solve
int n;cin>>n;
bool flag=false;
for(int i=0;i<n;i++){
   int x;cin>>x;
   if(!isPerfectSquare(x))
   {
       flag=true;
   }
}
if(!flag){
    cout<<"NO"<<endl;
}else{
    cout<<"YES"<<endl;
 }
}
return 0;
}
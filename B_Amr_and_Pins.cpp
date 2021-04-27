#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
double r,x1,y1,x2,y2;cin>>r>>x1>>y1>>x2>>y2;
int ans=ceil(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))/(2*r));
// ans=ans/2*r;
cout<<ans;
return 0;
}
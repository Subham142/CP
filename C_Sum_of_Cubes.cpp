#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
unordered_map<ll,ll> m;
m[0]=0;
for(ll i=1;i<=10001;i++){
    m[i*i*i]++;
}

int t;
cin>>t;
while(t--){
//Solve
    ll x;
    cin>>x;
    int f=0;
    for(ll i=1;i<=10000;i++){
          if(f)
			break;

        ll y=i*i*i;
         if(y>=x)
            break;
        
        if(m.find(x-y) != m.end()){
            f=1;
            //break;
        }

    }
   
    if (!f){
			cout<<"NO\n";
		}
		else
		{
			cout<<"YES\n";
		}
}
return 0;
}
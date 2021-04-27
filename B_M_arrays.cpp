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
    int n,m;cin>>n>>m;
    vector<int>arr(n);
    vector<int> map(m,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        arr[i]=arr[i]%m;
        map[arr[i]]++;
    }
    int ans=0;
    if(map[0]>0){
        ans++;
    }
    for(int i=1;i<m;i++){
        if(map[i]>0){
            if(abs(map[i]-map[m-i]<=1)){
                ans++;
            }else{
                ans+=abs(map[i]-map[m-i]);
            } 
            map[m-i]=0;  
        }
    }
    cout<<ans<<endl;
}
return 0;
}



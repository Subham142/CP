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
 int n;cin>>n;
 vector<int> arr(n);
 vector<int> ans(101);
 for(int i=0;i<n;i++){
     cin>>arr[i],ans[arr[i]]++;
 }
    for(int i=0;i<=100;i++){
        if(ans[i]>0){
            cout<<i<<" ";
            ans[i]--;
        }
    }

    for(int i=0;i<=100;i++){
    for(int j=0;j<ans[i];j++){
        cout<<i<<" ";
    }
    }
    cout<<endl;
}
return 0;
}
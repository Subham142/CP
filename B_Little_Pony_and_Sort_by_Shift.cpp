#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n;cin>>n;
int arr[n];
int po=0,co=0;
for(int i=1;i<=n;i++)
    cin>>arr[i];

for(int i=2;i<=n;i++){
    if(arr[i-1]>arr[i]){
        po=i;
        co++;
    }

    if(co>=2)
    break;
}

if(co==1 && arr[1]>=arr[n]){
    cout<<n-po+1;
}else if(co==0){
    cout<<0;
}else{
    cout<<-1;
}
return 0;
}
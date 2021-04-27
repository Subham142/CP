#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){
//Solve
int n;
cin>>n;
int arr[n],ans=0;
for(int i=0;i<n;i++)
cin>>arr[i];
for(int i=0;i<n-1;i++){
    int mi=min(arr[i],arr[i+1]);
    int ma=max(arr[i],arr[i+1]);

    while(2*mi<ma)
    {
        mi=mi*2;
        ans++;
    }
 

}
 cout<<ans<<endl;

}
return 0;
}
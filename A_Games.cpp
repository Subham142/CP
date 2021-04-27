#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int n;
 cin>>n;
int home[n],guest[n];
for(int i=0;i<n;i++){
    cin>>home[i];
    cin>>guest[i];
}
int ans=0;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i!=j && home[i]==guest[j]){
          ans++;
        }
    }
}
cout<<ans;
return 0;
}
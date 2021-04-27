#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t,n;
cin>>n>>t;
string s;
cin>>s;
while(t--){
    for(int i=0;i<n;i++){
        if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]) ;
                i++;
            }
    }
}
cout<<s;
return 0;
}
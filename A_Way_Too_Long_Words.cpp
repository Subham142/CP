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
string s;
cin>>s;
int l=s.length();
if(l>10){
cout<<s[0]<<(l-2)<<s[l-1]<<endl;
}else{
    cout<<s<<endl;
}
}
return 0;
}
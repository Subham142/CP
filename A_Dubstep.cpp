#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
string s;
cin>>s;
bool flag=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B' ){
        i+=2;
        if(!flag){
            cout<<" ";
        }
        continue;
    }else{
        flag=0;
        cout<<s[i];
    }
}

return 0;
}
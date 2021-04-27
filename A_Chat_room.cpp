#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, s1="hello";
    cin>>s;
    int count =0,j=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==s1[j]){
            count++;
            j++;
        }
    }

    if(count==5){
    cout<<"YES\n";}
    else{
    cout<<"NO\n";}

return 0;
}
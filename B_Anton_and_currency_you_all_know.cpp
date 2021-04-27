#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
string s;
cin>>s;
bool flag=0;
    for(char i:s){
        if((i-'0')%2==0){
            flag=1;
        }
    }

    if(flag){
        int n=s.length();
        for(int i=0;i<n;i++){
            if((s[i]-'0')%2==0){
                if(s[i]<s[n-1]){
                    swap(s[i],s[n-1]);
                    break;
                }
            }
        }
        if((s[n-1]-'0')%2!=0){
            for(int i=n-2;i>=0;i--){
            if((s[i]-'0')%2==0){
                swap(s[i],s[n-1]);
                    break;
                }
            }
        }
        
       cout<<s; 

    }else{
        cout<<-1;
    }
return 0;
}
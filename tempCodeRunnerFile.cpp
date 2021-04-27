#include<bits/stdc++.h>
using namespace std;
int main() {

int t;cin>>t;
    while(t--){
        string s;cin>>s;
        vector<int> s1;
        for(int i=0;i<s.size();i++){
            char x=s[i];
            s1.push_back(x);
        }
       vector<int> s2 = s1;
       bool flag=0;
       reverse(s2.begin(),s2.end());
        for(int i=0;i<s1.size();i++){
            int x=abs(s1[i]-s1[i+1]);
            int y=abs(s2[i]-s2[i+1]);
            if(x!=y){
                cout<<"NOT FUNNY\n";
                flag=1;
                break;
            }
        }
        if(!flag){
            cout<<"FUNNY\n";
        }
        
    }
    
}
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
int x=0,y=0,px,py;
cin>>px>>py;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
    if(s[i]=='U'){
        py-=1;
    }   
    else if(s[i]=='D'){
    py+=1;}
    
    else if(s[i]=='R'){
        px-=1;}
    
    else if(s[i]=='L'){
        px+=1;}
}

   if(px==0 && py==0)
    cout<<"YES"<<endl;
    
    else
     cout<<"NO"<<endl;


}
return 0;
}
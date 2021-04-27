#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    bool c=0;
    while(n!=0 && m!=0){
        n--;
        m--;
        c==0 ? c=1: c=0;
    }   
    if(c){
        cout<<"Akshat";

    }else{
        cout<<"Malvika";
    }
return 0;
}
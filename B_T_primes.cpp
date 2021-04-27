#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define int int64_t
set<int> tPrime;
int arr[(int)1e6+10];
void Prime(){

    tPrime.insert(4);
    for(int i=3;i<=1e6;i+=2){
        if(arr[i]==0){
            tPrime.insert(i*i);
            for(int j=i;j<=1e6;j+=i){
                arr[j]=1;
            }
        }
    }
}

int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 Prime();
int t;
cin>>t;
while(t--){
    int x;cin>>x;
    if(tPrime.find(x)!=tPrime.end()){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
//Solve
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod  1000000007
#define int int64_t
int32_t main(){
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){
//Solve
int n;cin>>n;
vector<int> arr;
unordered_map<int,int> fre;
for(int i =0;i<n;i++){
    ;
    int x;cin>>x;
    arr.push_back(x);
    fre[x]++;
    
}
int y;
for(auto i: fre){
 if(i.second == 1)
  y=i.first;
}

int index;
for(int i=0;i<arr.size();i++){
    if(arr[i]==y){
        index=i+1;
        break;
    }
}
cout << index<< endl;
}   
return 0;
}
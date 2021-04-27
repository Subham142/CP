#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int x,y, m[5][5];

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>m[i][j];

        if(m[i][j]==1)
        {
            x=i+1;
            y=j+1;
        }
    }
}
 int ans= abs(3-x) + abs(3-y);
 cout<<ans;


return 0;
}
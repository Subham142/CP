#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int t;
cin>>t;
while(t--){

        int n,u,r,d,l;
        cin>>n>>u>>r>>d>>l;
        int u1=u;
        int r1=r;
        int l1=l;
        int d1=d;
        if(u==n)
        {
            l1--;
            r1--;
        }
        if (d == n)
        {
            l1--;
            r1--;
        }
        if (l == n)
        {
            d1--;
            u1--;
        }
        if (r == n)
        {
            d1--;
            u1--;
        }
 
 
        if(u==n-1)
        {
            if(l1>r1)
            {
                l1--;
            }
            else
            {
                r1--;
            }
        }
        if (d == n - 1)
        {
            if (l1 > r1)
            {
                l1--;
            }
            else
            {
                r1--;
            }
        }
        if (l == n - 1)
        {
            if (u1 > d1)
            {
                u1--;
            }
            else
            {
                d1--;
            }
        }
        if (r == n - 1)
        {
            if (u1 > d1)
            {
                u1--;
            }
            else
            {
                d1--;
            }
        }
 
        //cout<<u1<<" "<<r1<<" "<<d1<<" "<<l1<<"\n";
        if(l1<0 || u1<0 || d1<0 || r1<0)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }
}
return 0;
}
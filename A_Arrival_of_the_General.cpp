#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);
int n,maxindex=0,minindex=0,maxval=INT_MIN,minval=INT_MAX;
cin>>n;
 int arr[n];
 for(int i =0;i<n;i++){
     cin>>arr[i];

     if(arr[i]>maxval){
         maxval=arr[i];
         maxindex=i;
     }

     if(arr[i]<=minval){
         minval=arr[i];
         minindex=i;
     }


 }

 if(maxindex>minindex){
	cout<<(maxindex-1)+(n-minindex)-1;
}
else{
	cout<<(maxindex-1)+(n-minindex);

}
return 0;
}
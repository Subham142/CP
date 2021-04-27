#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(NULL);

	string a, b;
	cin >> a>>b;
	for (int i = 0;i < a.length();i++)
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
		if (b[i] >= 'A' && b[i] <= 'Z')
			b[i] += 32;
		if (a[i] > b[i]) { cout << "1"; return 0; }
		if (a[i] < b[i]) { cout << "-1";return 0; }
	}
 
	cout << "0" << endl;
 
return 0;
}
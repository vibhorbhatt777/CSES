#include<bits/stdc++.h>
using namespace std;
#define ll long long
void vb(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int32_t main(){
	vb();
	ll n;
	cin>>n;
	while (n != 1) 
		{
			cout << n << " ";
			n = (n % 2) ? 3 * n + 1 : n / 2;
		}
		cout << 1 << endl;
		return 0;
	}


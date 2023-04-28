#include<bits/stdc++.h>
using namespace std;
#define ll          long long
#define p7          1000000007
#define p9          998244353
#define pb          push_back
#define ff          first
#define ss          second
#define vll         vector<ll>
#define pll         pair<ll,ll>
#define vpll        vector<pll>
#define vvll        vector<vll>
#define mll         map<ll,ll>
#define test        ll T;cin>>T;while(T--)
#define ad(a,n)     vll a;a.resize(n);for(ll i=0;i<n;i++)cin>>a[i];
#define as(a,n)     for(ll i=0;i<n;i++){cout<<a[i]<<" ";}cout<<endl;
#define all(x)      x.begin(),x.end()

ll powm(ll x, ll y, ll m = p7) {
	x = x % m; ll res = 1; while (y)
	{if (y & 1)res = res * x; res %= m; y = y >> 1; x = x * x; x %= m;} return res;
}
ll modi(ll a, ll m = p7) {return powm(a, m - 2, m);}
void yesno(bool f) {f ? cout << "YES" << endl : cout << "NO" << endl;}


void vb77()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
}

int32_t main()
{
	vb77();
	// test
	{
		string s; cin >> s;
		ll n = s.size(), ans = 1, cur = 1;
		for (ll i = 1; i < n; i++)
		{
			if (s[i] == s[i - 1])
				cur++;
			else cur = 1;
			ans = max(ans, cur);
		}
		cout << ans << endl;
	}
	return 0;
}

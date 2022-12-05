#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n+1),pf(n+1);
    v[0]=0;
    pf[0]=0;
    for (ll i = 1; i <= n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    for (ll i = 1; i <= n; i++)
    {
        pf[i] = pf[i-1]+v[i];
    }
    
    while (q--)
    {
        ll x,y;
        cin>>x>>y;
        ll ans=pf[n-x+y]-pf[n-x];
        cout<<ans<<endl;

    }
    return 0;
}
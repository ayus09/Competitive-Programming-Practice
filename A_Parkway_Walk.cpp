#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll> v(n);
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(m>=sum){cout<<0<<endl;}
        else{cout<<sum-m<<endl;}
    }
    return 0;
}
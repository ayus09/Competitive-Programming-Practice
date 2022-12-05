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
        ll n,flag=0;
        cin>>n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        vector<vector<ll>> v(2);
        for (ll i = 0; i < n; i++)
        {
            ll k;
            cin>>k;
            v[a[i]].push_back(k);
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());

        ll ans=0;

    if(v[0].size()==v[1].size()) ans-=min(v[0][0], v[1][0]);
    
    while(!v[0].empty() && !v[1].empty()){
        ans+=((v[0].back()+v[1].back())*2);
        v[0].pop_back();
        v[1].pop_back();
    }
    for(auto x: v[0]) ans+=x;
    for(auto x: v[1]) ans+=x;
    cout << ans << "\n";
        
        
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
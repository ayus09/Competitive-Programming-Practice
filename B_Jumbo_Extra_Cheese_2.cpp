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
        ll n;
        cin>>n;
        vector<ll> hmax,wmin;
        ll sumax=0,sumin=0;
        for (ll i = 0; i < n; i++)
        {
            ll a,b;
            cin>>a>>b;
            sumax = max(sumax,max(a,b));
            sumin+=min(a,b);
        }
        cout<<(sumax+sumin)*2<<endl;

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
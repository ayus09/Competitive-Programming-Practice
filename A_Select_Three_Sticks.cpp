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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<ll> diff(n);
        diff[0]=0;
        for (ll i = 1; i < n; i++)
        {
            diff[i]=v[i]-v[i-1];
        }
        ll cur_sum = 0, sum=INT_MAX;
        for (ll i = 2; i < n; i++)
        {
            cur_sum = diff[i]+diff[i-1];
            sum = min(cur_sum, sum);
        }
        cout<<sum<<endl;                
    
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
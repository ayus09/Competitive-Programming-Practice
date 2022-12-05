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
        ll k=n/2;
        ll mn = INT_MAX;
        ll a=1,b=n-1;
        for (ll i = 1; i < k+1; i++)
        {
            ll x=n-i;
            ll lcm = (i*x)/__gcd(i,x);
            if(lcm<mn){
                a=i;
                b=x;
            }
            mn = min(lcm,mn);
        }
        cout<<a<<" "<<b<<endl;
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
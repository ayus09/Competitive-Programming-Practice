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
        vector<ll> v(n+1);
        v[0]=0;
        for (ll i = 1; i < n; i+=2)
        {
            cout<<i<<" ";
        }
        
        if(n%2==0){
            for (ll i = n; i > 1; i-=2)
        {
            cout<<i<<" ";
        }
        }
        else{
            cout<<n<<" ";
            for (ll i = n-1; i > 1; i-=2)
        {
            cout<<i<<" ";
        }
        }
        cout<<endl;
        
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
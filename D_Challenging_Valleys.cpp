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

        vector<ll> v;

        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll inc=0,dec=0,f=0;
        for (ll i = 0; i < n-1; i++)
        {
            if(v[i+1]>v[i]){
                inc++;
            }
            else if(v[i+1]<v[i]){
                dec++;
                if(inc>0){
                    f++;
                    break;
                }
            }
        }
        if(f==0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}
        

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
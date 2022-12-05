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
        int n,k,one=0;
        cin>>n>>k;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]==1){
                one++;
            }
        }

        if(one>0){cout<<"YES"<<endl;}
        else{cout<<"NO"<<endl;}                        
        
    }
    return 0;
}
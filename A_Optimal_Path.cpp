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
        ll m,n;
        cin>>n>>m;
        // ll v[n][m];
        // for (ll i = 0; i < n; i++)
        // {
        //     for (ll j = 0; j < m;j++)
        //     {
        //         v[i][j] = (i*m) + j+1;
        //     }
            
        // }
        ll sum=0;
        for (ll j = 0; j < m; j++)
        {
            sum += j+1;
        }
        for (ll i = 1; i < n; i++)
        {
            sum += (i*m) + m;
        }
        cout<<sum<<endl;
        
        
    }
    return 0;
}
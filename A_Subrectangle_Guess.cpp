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
        ll m,n,row,colum;
        cin>>n>>m;
        ll v[n][m];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m;j++)
            {
                cin>>v[i][j];
            }
            
        }
        ll maxi = v[0][0];
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                maxi = max(maxi,v[i][j]);
            }
        
        }

        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if(v[i][j]==maxi){
                    row =i+1;
                    colum=j+1;
                    break;
                }
            }
            
        }
        int a = max(row,n-row+1);
        int b = max(colum,m-colum+1);
        
        cout<<a*b<<endl;
        
    }
    return 0;
}
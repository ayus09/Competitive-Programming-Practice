#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m,p=0;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cin>>m;
        ll b[m];
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
            p+=b[i];
        }
        ll c=p%n;
        cout<<a[c]<<endl;
        
        
    }
    return 0;
}
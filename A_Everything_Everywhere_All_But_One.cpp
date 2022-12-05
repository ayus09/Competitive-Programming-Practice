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
        ll n,x=0;
        cin>>n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

            for (ll i = 0; i < n; i++)
            {
                x+=a[i];
            }
            x=x-a[n/2];
            x = x/(n-1);
            if(x==a[n/2]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    }
    return 0;
}
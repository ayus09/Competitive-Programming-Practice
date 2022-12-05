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
        vector<ll> arr(n);
        ll ct=0,temp;
        for (ll i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        temp=arr[n-1];
        for (ll i = n-1; i>0 ; i--)
        {
            if(arr[i]!=0){
                
            }
        }
        

    }
    return 0;
}
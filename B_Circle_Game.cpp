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
        ll n,k=0;
        cin>>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        if(n%2!=0){
            cout<<"Mike"<<endl;
        }
        else{
            for (ll i = 0; i < n; i++)
            {
                if(v[i]%2 != 0){
                    k++;
                }
            }
            if(k%2==0){
                cout<<"Joe"<<endl;
            }
            else{
                cout<<"Mike"<<endl;
            }
            
        }
        
        
    }
    return 0;
}
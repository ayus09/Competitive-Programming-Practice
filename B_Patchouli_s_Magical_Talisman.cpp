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
        ll n;
        cin>>n;
        vector<ll> v(n);
        int even=0,odd=0,halfodd=0,halfeven=0,step=0;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0){
                even++;
                if((v[i]/2)%2 != 0){
                    halfodd++;
                }
                else{
                    halfeven++;
                }
            }
            else{
                odd++;
            }
        }
        if(n==odd){
            cout<<0;
        }
        else if(odd>=even){
            cout<<even;
        }
        else if(n==even){
            if(halfodd>0){
                cout<<n;
            }
            else{
                
                for (int i = 0; i < n; i++)
                {
                    if(v[i]%2==0){
                        v[i]/2;
                        step++;
                    }
                }
                
            }
        }
        else{
            cout<<n-odd;
        }
        

    }
    return 0;
}
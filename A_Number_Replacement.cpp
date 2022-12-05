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
        ll n,flag=0;
        cin>>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        string s;
        cin>>s;

        for (ll i = 0; i < n; i++)
        {
            int k=v[i];
            char p = s[i];

            for (ll j = i+1; j < n; j++)
            {
                if(v[j]==k && s[j]!=p){
                    cout<<"NO"<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                break;
            }
            
        }
        if(flag==0){
            cout<<"YES"<<endl;
        }
        
        
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
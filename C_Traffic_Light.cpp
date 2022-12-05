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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;

        if(c=='g'){
            cout<<0<<endl;
            continue;
        }

        vector<ll> xg,xc;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='g'){
                xg.push_back(i);
            }
            if(s[i]==c){
                xc.push_back(i);
            }
        }

        ll res = INT_MIN;

        for (ll i = 0; i < xc.size(); i++)
        {
            auto it = upper_bound(xg.begin(),xg.end(),xc[i]);
            
            if(it == xg.end()){
                ll d = n-xc[i]+xg[0];
                res = max(res,d);
            }

            else{
                ll d = *it - xc[i];
                res = max(res,d);
            }
        }
        cout<<res<<endl;

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
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n;
    cin>>n;
    vector<pair<string,string>> v;
    for (ll i = 0; i < n; i++)
    {
        string x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    ll k=0;
    vector<string> res;
    while (k<n)
    {
        if(v[k].second=="rat"){
            res.push_back(v[k].first);
        }
        k++;
    }

    k=0;
    while (k<n)
    {
        if(v[k].second=="woman" || v[k].second=="child"){
            res.push_back(v[k].first);
        }
        k++;
    }
    k=0;
    while (k<n)
    {
        if(v[k].second=="man"){
            res.push_back(v[k].first);
        }
        k++;
    }
    k=0;
    while (k<n)
    {
        if(v[k].second=="captain"){
            res.push_back(v[k].first);
        }
        k++;
    }

    for (ll i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
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
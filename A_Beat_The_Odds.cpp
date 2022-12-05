#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool cmp(pair<string,ll> a, pair<string,ll> b){
    if(a.second != b.second){return a.second>b.second;}
    else{return a.first<b.first;}
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n;
    cin>>n;
    vector<pair<string,ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);

    for (ll i = 0; i < n; i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    
    return 0;
}
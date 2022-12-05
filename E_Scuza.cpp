#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t, n, q, i, j, s, k;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>q;
        
        ll a[n];
        ll ans[q];
        vector<pair<ll, ll>> qu;
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<q; i++)
        {
            cin>>k;
            qu.push_back({k, i});
        }
        
        sort(qu.begin(), qu.end());
        
        s=0;
        j=0;
        for(i=0; i<q; i++)
        {
            while(j<n)
            {
                if(a[j]<=qu[i].first){
                    s=s+a[j];
                    j++;
                }else{
                    break;
                }
            }
            ans[qu[i].second]=s;
        }
        
        for(i=0; i<q; i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
        
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
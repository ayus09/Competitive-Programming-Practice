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
        ll sum=0,ans=0;
    vector<ll> a(n),b(n);
    for(auto &it:a){
        cin>>it;
        sum+=it;
    }
    for(auto &it:b){
        cin>>it;
        sum-=it;
    }
    for(ll i=0;i<n;i++){
        ans+=(a[i]^b[i]);
    }
    ans=min(ans,1+abs(sum));
    cout<<ans<<"\n";        

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
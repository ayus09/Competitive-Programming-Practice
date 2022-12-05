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
        ll n,ctn=0,ctp=0,cto=0,sum=0,sump=0,sumn=0;
        cin>>n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            sum+=v[i];
            if(v[i]>0){ctp++; sump+=v[i];}
            if(v[i]<0){ctn++; sumn+=v[i];}
            if(v[i]==0){cto++;}
        }

        if(cto==n || ctp+cto==n || ctn+cto==n){
            cout<<abs(sum)<<endl;
        }
        else{
            cout<<max(abs(sump),abs(sumn)) - min(abs(sump),abs(sumn))<<endl;
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
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
        ll n,q,sm=0,cto=0,cte=0;
        cin>>n>>q;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]%2==0){cte++;}
            else{cto++;}
            sm+=v[i];
        }
        ll sm1 = sm;
        while(q--){
            ll type, x;
            cin>>type>>x;
                        
            if(type==0 && x%2==0){
                sm = sm + (x*cte);            
            }
            else if(type==0 && x%2!=0){
                sm = sm + (x*cte);
                cto = cto+cte;           
                cte=0;
            }
            else if(type==1 && x%2!=0){
                sm = sm + (x*cto);
                cte = cto+cte;           
                cto=0;
            }
            else if(type==1 && x%2==0){
                sm = sm + (x*cto);
            }
            cout<<sm<<endl;
                                    
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
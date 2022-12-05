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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll temp = s/k;
        vector<ll> v(n,0);
        if(temp<b){
            cout<<-1<<endl;
        }

        else if(temp==b){
            v[n-1]=b;
            for(auto val : v){
                cout<<val<<" ";
            }
            cout<<endl;
        }
        
        else if(temp>b){
            v[n-1]=b;
            ll left = s-b;
            if((k-1)*(n-1) > s-b && n>1){cout<<-1;}

            else if((k-1)*(n-1) == s-b && n>1){
                for(ll i=0;i<n-1;i++){
                    cout<<k-1<<" ";
                }
                cout<<b<<endl;
            }

            else if((k-1)*(n-1) < s-b && n>1){
            ll ct=0;
            while(left-k+1>0){
                cout<<k-1<<" ";
                left-=k-1;
                ct++;
            }
            cout<<left<<" ";
            ll x = n-ct-2;
            for(ll i=0;i<x;i++){
                cout<<0<<" ";
            }
            cout<<b<<endl;
            }
        }
        
        if(n==1){
            if(temp==b){cout<<s<<endl;}
            else{cout<<-1<<endl;}
        }
                
    }
    return 0;
}
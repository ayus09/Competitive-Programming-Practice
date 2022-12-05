#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n,d,ct=0;
    cin>>n>>d;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll i=0,j=n-1;
    if(n==1){
        if(v[0]>d){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    else{

    while(i<=j){
        if(v[j]>d){
            ct++;
            j--;
        }
        else{
            ll ele = j-i+1;
            ll x = d/v[j];
            if(ele>=x+1){
                ct+=1;
                j--;
                i+=x;
            }
            else{
                break;
            }
        }
    }
    cout<<ct;
    
    }

    return 0;
}
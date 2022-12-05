#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,a=0,b=0;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            if(s[0]==s[1]){
                cout<<2<<endl;
            }
            else{cout<<0<<endl;}
        }
        
        else if(n%2==0){
            for (ll i = n/2; i < n; i++)
            {
                if(s[i]==s[n/2]){
                    a++;
                }
                else{break;}
            }
            cout<<2*a<<endl;
        }
        else{
            for (ll i = n/2; i < n; i++)
            {
                if(s[i]==s[n/2]){
                    b++;
                }
                else{break;}
            }
            cout<<(2*b)-1<<endl;
        }

        
    }
    
}
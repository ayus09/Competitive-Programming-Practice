#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a, ll b)
{
    if((a%b)==0){
        return b;
    }else{
        return gcd(b, a%b);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin>>t;
    ll n, i, g;
    while (t--)
    {
        cin>>n;

        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        g=a[0];
        
        for(i=1; i<n; i++)
        {
            g=gcd(a[i], g);
        }
        
        cout<<a[n-1]/g<<"\n";

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
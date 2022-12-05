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
        ll m,n;
        cin>>n>>m;
        if(n==1 && m==1){cout<<0<<endl;}
        else if(n>=m){
            cout<<m+n-2+m<<endl;
        }
        else if(m>n){
            cout<<m+n-2+n<<endl;
        }

        
    }
    return 0;
}
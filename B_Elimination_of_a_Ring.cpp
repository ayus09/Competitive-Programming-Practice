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
        ll n,i,f;
        cin>>n;
        f=0;
        
        ll a[n];
        
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        
        for(i=0; i<n; i++)
        {
            if(a[(i-1+n)%n]!=a[(i+1)%n]){
                f++;
                break;
            }
        }
        
        if(f==0){
            cout<<n/2+1<<"\n";
        }else{
            cout<<n<<"\n";
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
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
        ll n,m;
        cin>>n>>m;
        ll ans=n,k=1;
        while (n%10==0)
        {
            n/=10;
        }
        while (n%5==0)
        {
            n/=5;
            if(k*2<=m){
                k=2*k;
            }
            else{
                break;
            }
        }
        while (n%2==0)
        {
            n/=2;
            if(k*5<=m){
                k=5*k;
            }
            else{
                break;
            }
        }
        while (k*10<=m)
        {
            k*=10;
        }
        
        k=(m/k)*k;
        cout<<ans*k<<endl;
        
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
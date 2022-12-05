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
        ll n,m,sx,sy,d;
        cin>>n>>m>>sx>>sy>>d;
        if ((sy - d <= 1 || sx + d >= n) && (sy + d >= m || sx - d <= 1))
        {
            cout<<-1<<endl;
        }
        else{
            cout<<n+m-2<<endl;
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
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
        ll n,x,y;
        cin>>n>>x>>y;
        if(x > y)swap(x, y);
		if(x || !y || (n - 1) % y)
		{
			cout << -1 << endl;
			continue;
		}
		for(int k = 2; k <= n; k += y)
		{
			for(int i = 1; i <= y; i++)cout << k << ' ';
		}
		cout << endl;
        
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
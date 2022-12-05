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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x = a * d, y = b * c;
    if (x == y)
        cout << "0"<<endl;
    else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
        cout << "1"<<endl;
    else
        cout << "2"<<endl;                
    
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
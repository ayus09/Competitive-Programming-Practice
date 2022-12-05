#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t, n, q, i, j, s, k;
    
    cin>>t;
    
    while(t--)
    {
    ll n;
    cin>>n;
    if(n%2==1){
        for(i=1; i<=n; i++)
            {
                cout<<"1 ";
            }
    }
    else{
        cout<<"1 3 ";
            
            for(i=1; i<=n-2; i++)
            {
                cout<<"2 ";
            }
    }
    cout<<endl;
        
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
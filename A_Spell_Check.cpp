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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<char> v,v1;
        v.push_back('T');
        v.push_back('i');
        v.push_back('m');
        v.push_back('u');
        v.push_back('r');
        sort(v.begin(),v.end());

        for (ll i = 0; i < n; i++)
        {
            v1.push_back(s[i]);
        }
        sort(v1.begin(),v1.end());
        if(v1==v){
            cout<<"YES"<<endl;
        }
        
        else{
            cout<<"NO"<<endl;
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
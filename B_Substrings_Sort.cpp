#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll n;
    cin>>n;
    vector<string> v(n), vso(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (ll i = 1; i <= 100; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if(v[j].size()==i){
                vso.push_back(v[j]);
            }
        }
    }
    ll flag=0;
    for (ll i = 0; i < n-1; i++)
    {
        ll z = vso[i+1].find(vso[i]);
        if(z==-1){
            flag++;
            break;
        }
    }

    if(flag!=0){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        
    }
    for (ll i = 0; i < n; i++)
        {
            cout<<vso[i]<<endl;
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
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
        int n,fone=-1,lasto=-1;
        cin>>n;
        vector<ll> a;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin>>p;
            a.push_back(p);
        }

        for (ll i = 0; i < n; i++)
        {
            if(a[i]==1){
                fone=i;
                break;
            }
        }
        for (ll j = n-1; j >= 0; j--)
        {
            if(a[j]==0){
                lasto=j;
                break;
            }
        }

        if(fone==-1 || lasto==-1){
            cout<<0<<endl;
        }

        else{
            int count=0;
            while(lasto>fone){
                while(a[fone]==0){
                    fone++;
                }
                while(a[lasto]==1){
                    lasto--;
                }
                if(lasto>fone){
                    count++;
                    fone++;
                    lasto--;
                }
            }
            cout<<count<<endl;
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
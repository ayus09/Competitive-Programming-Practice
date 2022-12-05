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
        vector<vector<char>> v;
        for (ll i = 0; i < 8; i++)
        {
            vector<char> temp(8);
            for (ll j = 0; j < 8; j++)
            {
                cin>>temp[j];
            }
            v.push_back(temp);            
        }
        
        for (ll i = 0; i < 8; i++)
        {
            for (ll j = 0; j < 7; j++)
            {
                if(v[i][j]==v[i][j+1]){

                }
            }
            
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
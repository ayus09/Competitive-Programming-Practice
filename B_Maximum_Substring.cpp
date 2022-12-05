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
        ll n,x=0,y=0;
        cin>>n;
        string s;
        cin>>s;
        for (ll i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                x++;
            }
            else{
                y++;
            }
        }

        if(x==0 || y==0){
            ll q = max(x,y);
            cout<<q*q<<endl;
        }
        else{
            // ll cx=1, cy=1, mcx=0, mcy=0;
            // ll j=0;
            // while(j<n-1){
            //     if(s[j]=='0' && s[j+1]=='0'){
            //         cx++;
            //     }
            //     else if(s[j]=='1' && s[j+1]=='1'){
            //         cy++;
            //     }
            //     else{
            //         mcx = max(mcx,cx);
            //         mcy = max(mcy,cy);
            //         cx=1;
            //         cy=1;
            //     }
            //     j++;
            // }
            // ll temp = max(mcx*mcx,mcy*mcy);
            // cout<<max(temp,x*y)<<endl;
            ll count = 0;
            ll cur_count = 1;
            for (ll i=0; i<n; i++)
            {

                if (i < n-1 && s[i] == s[i+1])
                    {cur_count++;}

                else
                {
                    if (cur_count > count)
                    {
                        count = cur_count;
                    }
                    cur_count = 1;
                }
            }
            
            cout<<max(count * count, x*y)<<endl;
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
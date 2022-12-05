#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t, l, r, x, a, b, i, j;
    cin>>t;
    while (t--)
    {        
        cin>>l>>r>>x>>a>>b;
        if(a==b){
            cout<<"0\n";                  //Number line pe banake smjho
        }else if(a<b){
            if(b-a>=x){
                cout<<"1\n";
            }else{
                if(a-l>=x){
                    cout<<"2\n";
                }else if(r-b>=x){
                    cout<<"2\n";
                }else if(r-a>=x && b-l>=x){
                    cout<<"3\n";
                }else{
                    cout<<"-1\n";
                }
            }
        }else{
            if(a-b>=x){
                cout<<"1\n";
            }else if(b-l>=x){
                cout<<"2\n";
            }else if(r-a>=x){
                cout<<"2\n";
            }else if(a-l>=x && r-b>=x){
                cout<<"3\n";
            }else{
                cout<<"-1\n";
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
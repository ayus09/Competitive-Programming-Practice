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
        string a,b;
        cin>>a>>b;
        int an=a.size();
        int bn=b.size();
        
        char la = a.back();
        char lb = b.back();
        
        if(la==lb){
            if(an==bn){cout<<'='<<endl;}
            else if(la=='S'){
                cout<<(an>bn ? '<' : '>')<<endl;
            }
            else{
                cout<<(an<bn ? '<' : '>')<<endl;
            }
        }
        else{
            cout<<(la>lb ? '<' : '>')<<endl;
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
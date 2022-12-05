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
        string s;
        cin>>s;
        string a = "";
        string ans="Yes";
        ll k=0;
    int pos=0;
    if(s[0]=='Y'){
        pos=0;
    }
    else if(s[0]=='e'){
        pos=1;
    }
    else if(s[0]=='s'){
        pos=2;
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==ans[pos]){
            pos++;
            if(pos==3){
                pos=0;
            }
        }
        else{
            cout<<"NO"<<endl;
            k=1;
            break;
        }
 
    }
    if(k==0)
    {cout<<"YES"<<endl;}

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
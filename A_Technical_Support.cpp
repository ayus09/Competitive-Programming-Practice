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
        int n,ct=0;
        cin>>n;
        string s;
        cin>>s;
        
        for(int i=0;i<n;i++){
            if(s[i]=='Q'){ct++;}
            else{ct--;}

            if(ct<0){ct=0;}
        }
        if(ct==0){cout<<"Yes"<<endl;}
        else{cout<<"No"<<endl;}
        
    }
    return 0;
}
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
        vector<char> v;
        v.push_back(a[0]);        
        v.push_back(a[1]);        
        v.push_back(b[0]);        
        v.push_back(b[1]);

        sort(v.begin(),v.end());
        char c=v[0];
        int ct=0;
        for(int i=0;i<v.size();i++){
            if(v[i+1]==v[i]){
                ct++;
            }
        }
        if(ct==0){cout<<3;}
    }
    return 0;
}
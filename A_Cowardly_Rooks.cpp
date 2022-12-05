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
        int n,m,k=0;
        cin>>n>>m;
        vector<pair<int,int>> v;

        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }

        if(m<n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
    return 0;
}
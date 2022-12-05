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
        int m,n;
        cin>>n>>m;
        if(n==1 || m==1){
            cout<<n<<" "<<m<<endl;
        }
        else{
        cout<<n/2 + 1<<" "<<m/2 + 1<<endl;
        }
    }
    return 0;
}
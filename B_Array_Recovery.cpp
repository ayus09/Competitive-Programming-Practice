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
        int n,k=0;
        cin>>n;
        vector<int> a(n);
        vector<int> d(n);
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        a[0]=d[0];
        
        for(int i=1;i<n;i++){
             a[i]=a[i-1]-d[i];
            if(a[i]>0 && d[i]!=0){
                cout<<-1;
                k=1;
                break;
            }
            a[i]=d[i]+a[i-1];
            
        }
        for (int i = 0; k==0 && i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        

            cout<<endl;

    }
    return 0;
}
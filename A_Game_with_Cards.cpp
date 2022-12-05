#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,c=0,d=0;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            c=max(c,a[i]);
        }
        cin>>m;
        int b[m];
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
            d=max(d,b[i]);
        }
        if(c==d){
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
        else if(c>d){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }
        else{
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }
        
        
    }
    
}
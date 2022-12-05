#include <bits/stdc++.h>
using namespace std;

int main(){

    long long int n,b,x,y,t,q=0,ans=0;
    cin>>t;

    while(t--){
        cin>>n>>b>>x>>y;
        for (long long int i = 0; i < n; i++)
        {
            if(q+x<b){q+=x;}
            else{q-=y;}
            ans+=q;
        }
        cout<<ans<<endl;
    }

    }

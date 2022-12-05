#include <bits/stdc++.h>
using namespace std;
const int N=2*(1e5);
long long int pf[N];
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int pf[n];
    long long int a[n];

    for (int pp = 1; pp <= n; pp++)
    {
        cin>>a[pp];
        pf[pp]=pf[pp-1]+a[pp];
    }
    while (q--)
    {
        long long int t,i,x;
        cin>>t;
        if(t==1){
            cin>>i>>x;
            pf[n]=pf[n]-a[i]+x;
            a[i]=x;
            cout<<pf[n]<<endl;
        }
        else{
            cin>>x;
            a[n]={(n*x)*n};
            pf[n]=n*x;
            cout<<pf[n]<<endl;
        }
    }
}   

    // for (int k = 0; k < q; k++)
    // {
    //     long long int t,i,x;
    //     cin>>t;
    //     if(t==1){
    //         cin>>i>>x;
    //         a[i]=x;
    //         for (int z = 1; z <= n; z++)
    //         {
    //             pf[0]=0;
    //             pf[z]=pf[z-1]+a[z];
    //         }
    //         cout<<pf[n]+x-a[i]<<endl;
            
    //     }
    //     else{
    //         cin>>x;
    //         cout<<n*x<<endl;
    //         for (int y = 1; y <= n; y++)
    //         {
    //             a[y]=x;
    //         }
            
    //     }
    // }
    
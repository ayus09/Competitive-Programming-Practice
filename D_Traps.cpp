#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        vector<int> v1,v2(k);
        v1=v;

        if(n==k){
            cout<<0<<endl;
        }
        
        else{
            sort(v1.begin(),v1.end());
            for (int i = 0; i < k; i++)
            {
                v2[i]=v1[n-1-k+i];
            }
            
        }
        
    }
    
}
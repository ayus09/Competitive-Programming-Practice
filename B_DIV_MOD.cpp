#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,i,l[n],r[n],a[n],k,f[r-l-1],j,z;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        cin>>l[i]>>r[i]>>a[i];
    }
    

    for ( i = 0; i < n; i++)
    {
        for ( k = l[i]; k <= r[i]; k++)
    {
        f[k] = k/a[i] + k%a[i];
        return f[k];
    }
        
    }

    
    for ( z = 0; z < n; z++)
    {
        for (j = l[z]; j <= r[z]; j++)
        if (f[j] > f[0])
            f[0] = f[j];
            return f[0];
    }
    cout<<f[0];
    
    return 0;
}
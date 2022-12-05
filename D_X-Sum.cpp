#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n,m;
        long long int a[n+1][m+1];
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                a[0][j]=a[i][0]=0;
                cin>>a[i][j];
            }
            
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                a[i][j] += a[i-1][j-1]+a[i+1][j+1]+a[i-1][j+1]+a[i+1][j-1];
            }
            
        }
        int maxelement = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if(a[i][j]>maxelement){
                    maxelement=a[i][j];
                }
            }
            
        }
        cout<<maxelement;
        

        
    }   
}
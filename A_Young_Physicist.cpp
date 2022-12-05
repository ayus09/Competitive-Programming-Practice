#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=0,c=0,d=0;
    int a[3][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>>a[j][i];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        b+=a[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        c+=a[1][i];
    }
    for (int i = 0; i < n; i++)
    {
        d+=a[2][i];
    }
    
    if(b==0&&c==0&&d==0){cout<<"YES";}
    else{cout<<"NO";}
    
    
}
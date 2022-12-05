#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,a[n],b=0,c=0;
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]==0){
                b++;
            }
        }

        for (int j = 0; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                if(a[j]==a[k]){
                    c++;
                }
            }
            
        }
        if(b>0){
            std::cout<<n-1;
        }
        else if(c>0){
            std::cout<<n;
        }
        else{
            std::cout<<n+1;
        }
        
    }
    
}
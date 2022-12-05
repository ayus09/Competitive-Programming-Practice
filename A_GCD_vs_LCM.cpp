#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
  
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

long long int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}


int main(){

    int t,n,a,b,c,d;
    cin>>t;

    while(t--){
        cin>>n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-i; j++)
            {
                for (int k = 0; k < n-i-j; k++)
                {
                    for (int l = 0; l <= n-i-j-k; l++)
                    {
                        if(gcd(i,j)==lcm(k,l)&&i+j+k+l==n){
                            cout<<i<<j<<k<<l<<endl;
                        }
                    }
                    
                }
            }
                
        }
            
    }

    }

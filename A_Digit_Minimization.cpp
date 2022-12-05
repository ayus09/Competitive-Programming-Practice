#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n;
        vector<int> v;
        if(n<100){
            cout<<n%10<<endl;
        }
        else{
            int min = n % 10;
            n = n/10;
            while (n != 0) {
                if (min > n % 10)
                min = n % 10;
                n /= 10;
            }
            cout<<min<<endl;
        }
    }
    
}
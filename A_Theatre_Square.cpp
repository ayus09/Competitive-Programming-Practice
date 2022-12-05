#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a;
    cin>>n>>m>>a;
    if(m%a ==0){
        if(n%a==0){
            cout<<(m*n)/(a*a);
        }
        else{
            cout<<(m/a)*(n/a + 1);
        }
    }
    else{
        if(n%a==0){
            cout<<(n/a)*(m/a + 1);
        }
        else{
            cout<<(m/a + 1)*(n/a + 1);
        }
    }

}

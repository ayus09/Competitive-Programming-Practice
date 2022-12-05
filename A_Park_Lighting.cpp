#include <bits/stdc++.h>
using namespace std;

int main(){

    int t,n,m;
    cin>>t;

    while (t--){
        cin>>n>>m;
        if(m%2 == 0){
            cout<< n*m/2<<endl;
        }
        else{
            cout<<(n*(m/2)) + (n+1)/2<<endl;
            }
    }
    }

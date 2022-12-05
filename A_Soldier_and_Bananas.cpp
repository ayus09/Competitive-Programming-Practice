#include <bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w,a;
    cin>>k>>n>>w;
    a=k;

    for (int i = 2; i <= w; i++)
    {
        a += i*k;
    }
    if(a<=n){cout<<"0";}
    else{cout<<a-n;}
    

    }

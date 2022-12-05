#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,i;
    cin>>n;
    int a=0;

    for ( i = 2; i < n; i++)
    {
        if((n-i)%i == 0){
            a++;
        }
    }

    cout<<a+1;

    }

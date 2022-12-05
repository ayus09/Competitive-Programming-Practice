#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x = 0;

    while (n--)
    {
        string k;
        cin>>k;
        if(k =="++X" || k=="X++"){
            ++x;
        }
        else{
            --x;
        }
    }

    cout<<x<<endl;

    }

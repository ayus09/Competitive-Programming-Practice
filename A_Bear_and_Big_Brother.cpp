#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin>>a>>b;
    int k=0;

    if(a==b){
        cout<<1;
    }
    else{
        for (int i = 1; i<b ; i++)
        {
            if(a*pow(3,i) <= b*pow(2,i)){
                k++;
            }
        
        }
    cout<<k+1;    
    }

    }

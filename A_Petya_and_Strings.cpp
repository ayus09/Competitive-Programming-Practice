#include <bits/stdc++.h>
using namespace std;

int main(){

    string k,p;
    cin>>k>>p;
    transform(k.begin(), k.end(), k.begin(), ::toupper);
    transform(p.begin(), p.end(), p.begin(), ::toupper);

    int a=0;
    
    for (int i = 0; i < k.length(); i++)
    {
        
        if(int(k[i]) < int(p[i])){
            cout<<-1;
            a=1;
            break;
        }

        if(int(k[i]) > int(p[i])){
            cout<<1;
            a=1;
            break;
        }

    }
    if(a==0){
        cout<<0;
    }
    
    }

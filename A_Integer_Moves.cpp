#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x,y,a,t;
    cin>>t;
    while (t--)
    {
        cin>>x>>y;
        a = sqrt(x*x + y*y);
        if(x==0 && y==0){
            cout<<"0"<<endl;
        }
        else if(x*x + y*y == a*a){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }

    }
    
    
    }

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<char> v;

    for (int i = 0; i < s.size(); i++){
        if(i%2==0){
            v.push_back(s[i]);        
        }
    }

    sort(v.begin(),v.end());


    //Reverse sorting ke liye
    // sort(v.begin(),v.end(),greater<int>());
    
    
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i];
        if(i!=v.size()-1){
            cout<<'+';
        }
    }
    
    
    
    }

#include <bits/stdc++.h>
using namespace std;

int main(){

    int a=0;
    string s;
    cin>>s;
    // if(s.length())
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='4' || s[i]=='7')
            ++a;
    }
    if(a==4 || a==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    }

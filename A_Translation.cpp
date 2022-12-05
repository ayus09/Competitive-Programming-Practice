#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0;
    string s,t,rev_s;
    cin>>s>>t;
    if(s.size()==t.size()){

        for (int i = s.length()-1; i >= 0; --i)
        {
            rev_s += s[i];
        }

        if(rev_s == t){cout<<"YES";}
        else{cout<<"NO";}
    }
    else{cout<<"NO";}

    }

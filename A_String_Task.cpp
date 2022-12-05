#include <bits/stdc++.h>
using namespace std;
int main()
{
    string v,t="";
    cin>>v;
    
    for (int k = 0; k < v.size(); k++)
    {
        if('A'<=v[k]&&v[k]<='Z'){
            v[k]=v[k]+'a'-'A';
        }
    }
    for (int j = 0; j < v.size(); j++)
    {
        if(v[j]=='a' || v[j]=='e' || v[j]=='i' || v[j]=='o' || v[j]=='u' || v[j]=='y'){
            continue;
        }
        else{
            t+=v[j];
        }
    }
    for (int l = 0; l < t.size(); l++)
    {
        cout<<'.'<<t[l];
    }   
}
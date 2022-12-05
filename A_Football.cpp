#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0;
    for (int i = 0; i < s.size(); i++)
    {
            if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&s[i+2]==s[i+3]&&s[i+3]==s[i+4]&&s[i+4]==s[i+5]&&s[i+5]==s[i+6]){
                ++a;
            }
        
    }
    if(a>0){
        cout<<"YES";
    }
    else{cout<<"NO";}    
}
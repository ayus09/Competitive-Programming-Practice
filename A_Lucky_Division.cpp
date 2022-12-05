#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a=0,arr[s.size()],b=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='4'||s[i]=='7'){
            continue;
        }
        else{++a;}
    }
    if(a==0){cout<<"YES";}
    else{
        for (int j = 0; j < s.size(); j++)
        {
            arr[j]=int(s[j])-'0';
        }
        for (int k = 0; k < s.size(); k++)
        {
            b+=(arr[k])*(pow(10,(s.size()-k-1)));
        }

        if(b%4==0||b%7==0||b%47==0||b%74==0||b%477==0||b%747==0||b%774==0||b%744==0||b%474==0||b%447==0||b%777==0||b%444==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
    }

}
#include<iostream>
using namespace std;

int main(){

    int n,i;
    cin>>n;
    string s[n];
    for (i = 0; i < n; i++)
    {
        cin>>s[i];
    }

    for ( i = 0; i < n; i++)
    {
        if(s[i].length()<=10)
    {
        cout<<s[i]<<endl;
    }
    else{
        cout<<s[i][0]<<s[i].length()-2<<s[i][s[i].length()-1]<<endl;
    }

    }
    
    
    return 0;
}
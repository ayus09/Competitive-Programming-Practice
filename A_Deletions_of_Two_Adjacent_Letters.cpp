#include<iostream>
using namespace std;

int main(){

    int n,i;
    cin>>n;
    string s[n];
    char x[n];
    int index[n];

    for ( i = 0; i < n; i++)
    {
        cin>>s[i]>>x[i];

        index[i] = s[i].find(x[i]);
    }

    for ( i = 0; i < n; i++)
    {
    if (index[i]%2 == 0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    }
    
    
    
    
    return 0;
}
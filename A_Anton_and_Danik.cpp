#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int a=0, d=0;
    int n;
    string s;
    cin>>n;
    cin>>s;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=s[i];
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[j] == "A"){
            a++;
        }
        else{d++;}
    }

    if(a>d){cout<<"Anton";}
    else if(a<d){cout<<"Danik";}
    else{cout<<"Friendship";}

    }

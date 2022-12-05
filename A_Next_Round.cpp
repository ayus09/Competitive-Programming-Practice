#include <bits/stdc++.h>
using namespace std;

int main(){

    int n,k;
    cin>>n>>k;
    50>=n>=k>=1;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ct=0;
    for (int j = 0; j < n; j++)
    {
        if (a[j] >= a[k-1] && a[j]!=0){
            ct++;
        }
    }

    cout<<ct;
    
    
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    int z=0;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int b = 0; b < n; b++)
    {
        z+=arr[b];
    }
    sort(arr,arr+n);

    int l = 0,k=0,a=0;
    for (int j = n-1;; j--)
    {
        l += arr[j];
        if(z%2 == 0){
            if(l>z/2){
                break;
            }
            else{
                ++a;
            }   
        }
        else{
            if(l>=z/2){
                break;
            }
            else{
                ++a;
            }
        }
    }

    cout<<a+1;
    }

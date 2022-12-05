#include <bits/stdc++.h>
using namespace std;
int main()
{
    int hsh[5]={0*5};
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        hsh[a[i]]++;
    }
    if(hsh[3]>=hsh[1]){
        if(hsh[2]%2==0){
            cout<<hsh[3]+(hsh[2]/2)+hsh[4];
        }
        else{
            cout<<hsh[3]+(hsh[2]/2)+1+hsh[4];
        }
    }

    else{
        if((hsh[1]-hsh[3])%4==0){
            if(hsh[2]%2==0){
            cout<<hsh[3]+(hsh[2]/2)+hsh[4]+(hsh[1]-hsh[3])/4;
        }
        else{
            cout<<hsh[3]+(hsh[2]/2)+1+hsh[4]+(hsh[1]-hsh[3])/4;
        }
        }
        else if((hsh[1]-hsh[3])%4==1 || (hsh[1]-hsh[3])%4==2){
            if(hsh[2]%2==0){
            cout<<hsh[3]+(hsh[2]/2)+hsh[4]+1+(hsh[1]-hsh[3])/4;
        }
        else{
            cout<<hsh[3]+(hsh[2]/2)+1+hsh[4]+(hsh[1]-hsh[3])/4;
        }
        }
        else if((hsh[1]-hsh[3])%4==3){
            if(hsh[2]%2==0){
            cout<<hsh[3]+(hsh[2]/2)+hsh[4]+1+(hsh[1]-hsh[3])/4;
        }
        else{
            cout<<hsh[3]+(hsh[2]/2)+2+hsh[4]+(hsh[1]-hsh[3])/4;
        }
        
    }    

}}
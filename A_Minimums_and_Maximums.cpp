#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--){

        int l1,r1,l2,r2,a=0;
        cin>>l1>>r1>>l2>>r2;
        for (int i = l1; i <= r1; i++)
        {
            if(i>=l2&&i<=r2){
                a+=i;
                break;
            }
            
        }
        if(a!=0){
            cout<<a<<endl;
        }
        else{
            cout<<l1+l2<<endl;
        }
    }
}
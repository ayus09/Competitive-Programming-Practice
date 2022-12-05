#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        char arr[6];
        string s;
        cin>>s;
        for (int i = 0; i < 6; i++)
        {
            arr[i]=s[i];
        }
        if(int(arr[0])+int(arr[1])+int(arr[2])==int(arr[3])+int(arr[4])+int(arr[5]))
        cout<<"YES"<<endl;
        else{
            cout<<"NO"<<endl;
        }
        
    }


}

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int a=0,z=0;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int x = *min_element(arr,arr+n);

        for (int l = 0; l < n; l++)
        {
            z += arr[l]-x;
        }
        cout<<z<<endl;  
    }
}

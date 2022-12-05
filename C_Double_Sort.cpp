#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,p=-1;
        cin>>n;
        vector<vector<int>> v('2',vector<int>(n));
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>v[i][j];
            }
            
        }
        vector<vector<int>> v1;
        v1 = v;
        for (int i = 0; i < 2; i++)
        {
            sort(v1[i].begin(),v1[i].end());
        }
        set<int> s;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(v[i][j]!=v1[i][j])s.insert(j);
            }
            
        }
        if(s.size()==0){
            cout<<0<<endl; 
        }       
    }
    
}
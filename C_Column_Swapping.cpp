#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,m,p=-1;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>v[i][j];
            }
            
        }
        vector<vector<int>> v1;
        v1 = v;
        for (int i = 0; i < n; i++)
        {
            sort(v1[i].begin(),v1[i].end());
        }
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(v[i][j]!=v1[i][j])s.insert(j);
            }
            
        }
        if(s.size()==0){
            cout<<1<<" "<<1<<endl;
        }
        else if(s.size()==2){
            auto it = s.begin();
			int x=*it;
			it++;
			int y=*it;
			for(int i=0; i<n; i++)
			{
				if(v[i][x]<v[i][y]) p++;
			}
			if(p==-1) cout<<x+1<<' '<<y+1<<"\n";
			else cout<<-1<<"\n";
        }
        else{cout<<"-1"<<endl;}
        
        
        
    }
    
}
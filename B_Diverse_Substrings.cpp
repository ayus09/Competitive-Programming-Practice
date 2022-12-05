#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll distinct(string &s){
    sort(s.begin(),s.end());
    ll k = 1;
    if(s.size()==1){
        return k;
    }
    else{
    for (ll i = 0; i < s.size()-1; i++)
    {
        if(s[i]!=s[i+1]){
            k++;
        }
    }
    return k;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll ans, n, i, j, t1, l, maxf;
    string a;
    ll t;
    cin>>t;
    while (t--)
    {
        cin>>n;
        
        cin>>a;
        ans=0;
        
        ll c[10], dis=0;
        
        for(i=0; i<n; i++)
        {
            for(j=0; j<=9; j++){
                c[j]=0;
            }
            maxf=0;
            dis=0;
            
            for(j=i; j<=i+99 && j<n; j++)
            {
                c[a[j]-'0']++;
                maxf=max(maxf, c[a[j]-'0']);
                if(c[a[j]-'0']==1){
                    dis++;
                }
                
                if(dis>=maxf)
                ans++;
            }
        }
        
        cout<<ans<<"\n";
    
    }
    return 0;
}
/* -----------------END OF PROGRAM --------------------*/
/*
* stuff you should look before submission
* constraint and time limit
* int overflow
* special test case (n=0||n=1||n=2)
* don't get stuck on one approach if you get wrong answer
*/
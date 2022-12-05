#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m,k,curr_ct=0;
        cin>>n>>m>>k;
        string str1,str2,str3="";
        cin>>str1>>str2;
        ll n1=str1.size();
        ll n2=str2.size(),n3,x;
        ll y = min(n2,n1);
        multiset<char> s1,s2;
        for (ll i = 0; i < n; i++)
        {
            s1.insert(str1[i]);
        }
        for (ll i = 0; i < m; i++)
        {
            s2.insert(str2[i]);
        }
        char tp;
            for (auto it1 = s1.begin(); it1 != s1.end(); it1++)
            {
                for (auto it2 = s2.begin(); it2 != s2.end(); it2++)
                {
                    if(*it2<*it1 && curr_ct<=k){
                        str3 += *it2;
                        curr_ct++;
                        n3=str3.size();
                        if(n3==y){
                            x=1;
                            break;
                        }
                    }
                    else{
                        curr_ct=0;
                        tp=*it2;
                        break;
                    }
                }
                

                if(*it1<tp && curr_ct<=k){
                    n3=str3.size();
                    if(n3==y || x==1)break;
                    str3 += *it1;
                    curr_ct++;
                }
                else{
                    curr_ct=0;
                }
                
            }      
		cout<<str3<<endl;
    }
    return 0;
}
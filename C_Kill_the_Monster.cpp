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
        ll hc,dc,hm,dm,k,w,a,x=0;
        map<ll,pair<ll,ll>> m;
        cin>>hc>>dc;
        cin>>hm>>dm;
        cin>>k>>w>>a;
        if(k==0){
            if(hc%dm == 0){
                if(hm%dc == 0){
                    if(hc/dm >= hm/dc){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
                else{
                    if(hc/dm >= (hm/dc)+1){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }
            else{
                if(hm%dc == 0){
                    if((hc/dm)+1 >= hm/dc){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
                else{
                    if((hc/dm)+1 >= (hm/dc)+1){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }
        }
        //i is the coins spent on w, so coins spent on a = k-i and pair is final dc,hc
        else{
            for (ll i = 0; i <= k; i++)
            {
                m.insert({i,{dc+(i*w),hc+((k-i)*a)}});

            if(m[i].second%dm == 0){
                if(hm%m[i].first == 0){
                    if(m[i].second/dm >= hm/m[i].first){
                        ++a;
                    }
                }
                else{
                    if(m[i].second/dm >= (hm/m[i].first)+1){
                        ++a;
                    }
                }
            }
            else{
                if(hm%m[i].first == 0){
                    if((m[i].second/dm)+1 >= hm/m[i].first){
                        ++a;
                    }
                }
                else{
                    if((m[i].second/dm)+1 >= (hm/m[i].first)+1){
                        ++a;
                    }
                }
            }
            }
            if(a>0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            
        }



    }
    return 0;
}
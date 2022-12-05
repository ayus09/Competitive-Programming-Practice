#include<bits/stdc++.h>
using namespace std;
int main(){
long t;
cin>>t;
while(t--){
long n,m;
cin>>n>>m;
string s[n];
for(int i=0;i<n;i++) cin>>s[i];
int ans=INT_MAX;
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++)
{
int x=0;
for(int k=0;k<m;k++){
x+=abs(s[i][k]-s[j][k]);
}
ans=min(ans,x);
}
}
cout<<ans<<endl;

}
}
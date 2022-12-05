#include <bits/stdc++.h>
using namespace std;
int main()
{
int i,a,b[4],c;
cin>>a;
for(i=a+1;;i++)
{
	int k=i;
	for(int j=0;j<4;j++)
	{
		b[3-j]=k%10; k/=10;
	}
	c=0;
	for(int x=0;x<4;x++)
	{
		for(int y=x+1;y<4;y++)
		if(b[x]==b[y]) c++;
	} 
	if(c==0) break;
}
cout<<i;
}

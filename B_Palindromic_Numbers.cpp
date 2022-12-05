#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int countDigit(long long n) {
  return floor(log10(n) + 1);
}

// int countDigit(long long n)
// {
//    if(n == 0)
//      return 1;
//     int count = 0;
//     while (n != 0)
//     {
//         n = n / 10;
//         ++count;
//     }
//     return count;
// }

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n,b,ct;
        cin>>n>>b;
        
        for (ll i = b+1;; i++)
        {
            ct = i-b;
            int rev=0, rem, temp;
            temp = i;
            while(temp>0)
                {
                rem = temp%10;
                rev = (rev*10)+rem;
                temp = temp/10;
                }

            if(rev==i && countDigit(ct)==n){
                break;
            }
        }
        cout<<ct<<endl;
        
        
    }
    return 0;
}
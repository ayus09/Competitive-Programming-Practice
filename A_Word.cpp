#include <bits/stdc++.h>
using namespace std;

// int main(){

//     string s;
//     cin>>s;
//     int a=0;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if(int(s[i]) > 95){
//             a++;
//         }
//     }

//     if(s.length()%2 == 0){

//     if(a >= s.length()/2){
//         for (int j = 0; j < s.length(); j++)
//         {
//             if(int(s[j])<95){
//                 cout<<char(int(s[j]) + 32);
//             }
//             else{
//                 cout<<s[j];
//             }
//         }
        
//     }
//     else{
//         for (int k = 0; k < s.length(); k++)
//         {
//             if(int(s[k])>95){
//                 cout<<char(int(s[k]) - 32);
//             }
//             else{
//                 cout<<s[k];
//             }
//         }
//     }
//     }

//     else{
//         if(a >= (s.length()/2)+1){
//         for (int j = 0; j < s.length(); j++)
//         {
//             if(int(s[j])<95){
//                 cout<<char(int(s[j]) + 32);
//             }
//             else{
//                 cout<<s[j];
//             }
//         }
        
//     }
//     else{
//         for (int k = 0; k < s.length(); k++)
//         {
//             if(int(s[k])>95){
//                 cout<<char(int(s[k]) - 32);
//             }
//             else{
//                 cout<<s[k];
//             }
//         }
//     }
//     }
    
//     }
int main(){
    int q=0;
    string s;
    cin>>s;
    string f="";
    for (int j = 0; j < s.length(); j++)
        {
            if(int(s[j])<95){
                f+=char(int(s[j]) + 32);
            }
            else{
                f+=s[j];
            }
        }
    for (int j = 0; j < s.length(); j++){
        if(f[j]!=s[j]){q++;}
    }
    if(q>s.size()/2){
        for (int k = 0; k < s.length(); k++)
        {
            if(int(s[k])>95){
                cout<<char(int(s[k]) - 32);
            }
            else{
                cout<<s[k];
            }
        }
    }
    else cout<<f;
}

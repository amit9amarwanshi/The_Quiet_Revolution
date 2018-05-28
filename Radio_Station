#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,m,i,j;
     cin>>n>>m;
     string s1[m+n],s2[m+n];
     for(i=0;i<n+m;i++){
         cin>>s1[i]>>s2[i];
         if(s2[i][s2[i].length()-1]!=';'){
             s2[i].push_back(';');
         }
     }
     for(i=n;i<n+m;i++){
         if(s2[i][s2[i].length()-1]==';'){
          for(int j=0;j<n;j++){
              if(s2[j]==s2[i]){
                  cout<<s1[i]<<" "<<s2[i]<<" #"<<s1[j]<<"\n";
                  break;
              }
          }   
         }
     }
return 0;
}

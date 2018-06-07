#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,i,j,l,k,test;
    cin>>test;
    while(test--)
    {
      cin>>n>>m;
      char s[m];
      if(m==1||(m==2&&n%2==0)){
          cout<<"impossible\n";
      }
     else if(m==2&&n%2!=0){
         for(i=0;i<n/2;i++) cout<<"ab";
         cout<<"a\n";
         }
         else{ s[0]='a';
         for(i=1;i<m-1;i++) s[i]='b';
         s[m-1]='a';
         l=n/m; k=n%m;
         for(i=0;i<l;i++) for(j=0;j<m;j++) cout<<s[j];
         for(i=0;i<k;i++) cout<<s[i];
         cout<<"\n";
      }
    }
	return 0;
}  

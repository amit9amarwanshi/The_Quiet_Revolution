#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll t=1,n,i,j,k,l;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    cin>>t;
    while (t--) {
      cin>>n;
      ll a[n],countodd=0,counteven=0;
      for(i=0;i<n;i++) {
          cin>>a[i];
          if(a[i]%2!=0) countodd++;
          else counteven++;
      }
      if(countodd%2==0) cout<<1<<"\n";
      else cout<<2<<"\n";
    }
    return 0;
} 

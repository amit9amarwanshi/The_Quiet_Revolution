#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int s,n,i,j=0,m;
    cin>>n>>m;
    s=(n+2*m-1)/2/m*m;
   if(n<m) cout<<-1;
   else cout<<s;
    return 0;
}

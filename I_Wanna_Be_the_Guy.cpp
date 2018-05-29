#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,n1,n2,a,flag=1,i=0;
    cin>>n;
    set<ll>s;
    cin>>n1;
    for(i=0;i<n1;i++) {
        cin>>a;
        s.insert(a);
    }
    cin>>n2;
    for(i=0;i<n2;i++) {
        cin>>a;
        s.insert(a);
    }
    for(i=1;i<=n;i++){
       if(s.count(i)!=1){
           flag=0;
           break;
       }
    }
    if(flag==0) cout<<"Oh, my keyboard!";
    else if(i==n+1) cout<<"I become the guy.";
    return 0;
}

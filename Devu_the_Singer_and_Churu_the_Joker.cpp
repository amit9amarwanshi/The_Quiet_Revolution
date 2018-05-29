#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,d,s=0,i,flag=1;
    cin>>n>>d;
    ll a;
    for(i=0;i<n;i++){
        cin>>a;
       d-=a;
    }
    s=(d-10*(n-1)<0)?-1 :d/5;
   cout<<s;
    return 0;
}

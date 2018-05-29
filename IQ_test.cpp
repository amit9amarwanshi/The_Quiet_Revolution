#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,d,s1=0,s2=0,i,flag=0,j1,j2;
    cin>>n;
    ll a[n+1];
    for(i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            s1++;j1=i;
        }
        if(a[i]%2!=0){
            s2++;j2=i;
        }
    }
    if(s1>s2) cout<<j2;
    else if (s2>=s1) cout<<j1;
    return 0;
}

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t,n,i;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n+1],k;
        for(i=1;i<=n;i++) cin>>a[i];
        cin>>k;
        ll temp=a[k];
        sort(a+1,a+n+1);
        ll j=1,b=n,m;
        while(j<=b){
            m=(j+b)/2;
            if(a[m]==temp){
                cout<<m<<"\n";break;
            }
            if(a[m]>temp) b=m-1;
            else j=m+1;
        }
    }
    return 0;
} 

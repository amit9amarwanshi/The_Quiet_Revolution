#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main(){
    ll n,m,a,b,r;
    cin>>n>>m>>a>>b;
    r=n/m;
    if(n%m==0&&r*b<n*a){
        cout<<r*b;
    }
    else if(n%m==0&&r*b>=n*a){
        cout<<n*a;
    }
    else{
        r++;
        ll x=n%m;
        if((r-1)*b+x*a>r*b){
        if(r*b>n*a){
            cout<<n*a;
        }
        else{cout<<r*b;}
        }
        else{
            if((r-1)*b+x*a>n*a){
            cout<<n*a;
        }
        else{
            cout<<(r-1)*b+x*a;
        }
        }
    }
    return 0;
}

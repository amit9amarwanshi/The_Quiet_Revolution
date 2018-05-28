#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,m,i;
    cin>>n>>m;
    ll a,b;
    double x=1000000,k;
    for(i=0;i<n;i++) {
        cin>>a>>b; 
        k=((double)a/(double)b)*(double)m;
       // cout<<k<<"  "<<x<<"\n";
        x=min(x,k);
    }
    printf("%.8f\n",x);
    return 0;
}

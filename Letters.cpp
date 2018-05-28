#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,i,m;
    ll l=0,j=0,k=0,t;
    cin>>n>>m;
    ll a[n],p[n];a[0]=0;p[0]=0;
    cin>>a[1];p[1]=a[1];
    for(i=2;i<=n;i++) { cin>>a[i]; p[i]=a[i]+p[i-1];}
    for(i=0;i<m;i++){
        cin>>t;
        ll x=1,y=n;
        while(x<=y){
            k=(x+y)/2;
            if(p[k]>t&&p[k-1]<t) { cout<<k<<" "<<t-p[k-1]<<"\n"; break;}
            else if(p[k]<t&&p[k+1]>=t){ cout<<k+1<<" "<<t-p[k]<<"\n"; break;}
            else if(p[k]==t){ cout<<k<<" "<<t-p[k-1]<<"\n"; break;}
            else if(p[k]<t) x=k+1;
            else y=k-1;
        }
    }
    return 0;
}

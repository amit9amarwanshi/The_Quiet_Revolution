#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define INF 10000000000
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n][n],sum,ma,flag;
        sum=flag=0;
        ll k=INF;
        for(ll i=0;i<n;i++) for(ll j=0;j<n;j++) cin>>a[i][j];
        for(ll i=n-1;i>=0;i--){
            ma=0;
            for(ll j=0;j<n;j++){
                if(k>a[i][j]) ma=max(ma,a[i][j]);
            }
            if(ma==0) flag++;
            sum=sum+ma; k=ma;
        }
        if(flag!=0) cout<<-1<<"\n";
        else cout<<sum<<"\n";
    }
    return 0;
}

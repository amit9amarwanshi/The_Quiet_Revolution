#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
	ll t,n,m,c,d,s,i;
	cin>>t;
	while(t--){
	    cin>>n;
	    ll a[n],sum=0,mx=0;
	    cin>>a[0];
	    mx=a[0];
	    for(i=1;i<n;i++){
	        cin>>a[i];
	        sum+=a[i];
	        mx=max(mx,a[i]);
	    }
	    cin>>c>>d>>s;
	    double ca;
	    ca=(double)(c-1)*(double)mx;
	    printf("%.18f\n",ca);
	}
	return 0;
}

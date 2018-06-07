#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long int
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll test,i,n,p,k;
    cin>>test;
    while(test--)
    { 
        cin>>n>>p;
        k=n+p;
        ll a[n+p],tp,j=1;
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=n;i<k;i++){
         a[i]=a[n-1]+(a[n-1]-a[n-2])*j;
         j++;
        }
        tp = ((k+1)/2)-1;
        cout<<a[tp]<<"\n";
    }
	return 0;
}

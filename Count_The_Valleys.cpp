#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long 
int main() {
    ios::sync_with_stdio(false);
    ll n,t,i,c=0;
    cin>>t;
    while(t--){c=0;
        cin>>n;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=2;i<n;i++){
        if(a[i-2]>a[i-1]&&a[i-1]<a[i])
        {
            c++;
        }
        }
        cout<<c<<"\n";
    }
    
	return 0;
}  

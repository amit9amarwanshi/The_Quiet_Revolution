#include <bits/stdc++.h>
using namespace std;
#define ll unsigned int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll t,n,x,i;
    cin>>t;
    while(t--){
        ll max=UINT_MAX;
        cin>>n;
        x=max/(n+1);     
        for(i=1;i<n;i++)
        {
            cout<<x<<" ";
        }
        x=((max-((n-1)*x))/2)+1; 
        cout<<x<<"\n";
 
    }
   return 0;
}  

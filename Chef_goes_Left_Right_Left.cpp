#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll n,r,c2,c=1,ma,mi,i,t;
    cin>>t;
    while(t--)
    {
   	 c=1;
        cin>>n>>r;
        ma=10000000000;mi=0;
        if(n==1&&c2==r) cout<<"YES"<<"\n";
        else{
            for(i=0;i<n-1;++i)
            {
                cin>>c2;
                if(c2>r&&c2<ma) {
                     ma=c2;
                }
               else if(c2<r&&c2>mi) {
                    mi=c2;
                }
                else c=0;
            } cin>>c2;
 
        if(c==1) {cout<<"YES"<<"\n";}
        else cout<<"NO"<<"\n";
        }
    }
    return 0;
} 

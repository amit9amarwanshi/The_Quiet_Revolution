#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll t,n,k,j,i,best,sum,flag,s,b1,b2;
    cin>>t;
    while(t--){
        cin>>n>>k;s=sum=j=0;best=LLONG_MIN;
        ll a[n],l=0;
        for(i=0;i<n;i++) { cin>>a[i];s+=a[i];}
        if(k==1) for(i=0;i<n;i++){
           sum=max(a[i],sum+a[i]);
           best=max(best,sum);
        }else{
            for(i=0;i<n*2;i++,j++){
              sum=max(a[j],sum+a[j]);
              best=max(best,sum);if(j==n-1) j=-1;
            }
            if(s>0) {
                sum=0;
                sum=s*(k-2);
                s=0;
                b1=b2=LLONG_MIN;
                for(i=0;i<n;i++){
                    s+=a[i];
                    b2=max(b2,s);
                }s=0;
                for(i=n-1;i>=0;i--){
                    s+=a[i];
                    b1=max(b1,s);
                }
                best=max(best,sum+b1+b2);
            }
        }
        cout<<best<<"\n";
    }
    return 0;
} 

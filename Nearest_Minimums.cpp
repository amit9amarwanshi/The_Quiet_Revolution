#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t,n,i=0,j=0,k,l,mi1,mi2=1000000000;
    cin>>n;
    ll a[n];
    cin>>a[0];
    mi1=a[0];
    for(i=1;i<n;i++){
         cin>>a[i];
         mi1=min(mi1,a[i]);
    }
    ll flag=1;
    for(i=0;i<n;i++){
        if(a[i]==mi1){
            for(j=i+1;j<n;j++)if(a[j]==mi1) { flag=0;break;}
            if(flag==0) mi2=min(mi2,j-i);
            i=j-1;
            flag=1;
        }
    }
      cout<<mi2;
    return 0;
}

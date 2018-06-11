#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll arr[1000001];
void display(ll k,ll n,ll x);
void calc(ll n,ll m,ll x){
    ll i,l=0,k=1;
    for(i=n;i>0;--i){   
        if(i==x)continue;
        else if(m-i==0){ arr[k++]=i;break;}
        else if(m-i<l) {
                if(m-i==x) continue;
                else if(m-i==i) continue;
                m=m-i; l=i; arr[k++]=i;    arr[k++]=m;   break;
                }
        else{if(m-i==x) continue;
            if(m-i==i) continue;
            m=m-i;l=i;   arr[k++]=i;
            if(m<l){  arr[k++]=m;break;}
        }
    } 
    display(k-1,n,x);
    return;
}
void display(ll k,ll n,ll x){
    for(ll i=1;i<=n;++i)
    {    if(i==x) cout<<"2";
        else if(i==arr[k]&&k>=1) {cout<<"0";--k;}
        else cout<<"1";
     }
     cout<<"\n";
     return ;
}
int main(){
    ios::sync_with_stdio(0);
    ll t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>x>>n;
        arr[n]={0};
        ll i,m;
         m=(n*(n+1)/2)-x;
        if(m%2!=0||n==3||n==2||n==1) cout<<"impossible\n";
        else calc(n,m/2,x);
    }
   return 0;
} 

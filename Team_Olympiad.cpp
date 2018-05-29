#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll n,a;
    cin>>n;
    vector<pair<ll,ll> >v1;
    vector<pair<ll,ll> >v2;
    vector<pair<ll,ll> >v3;
    for(ll i=0;i<n;i++){
      cin>>a;
      if(a==1) v1.push_back(make_pair(a,i));
      else if(a==2) v2.push_back(make_pair(a,i));
      else if(a==3) v3.push_back(make_pair(a,i));
    }
    a=min(min(v1.size(),v2.size()),v3.size());
    cout<<a<<"\n";
    if(a!=0){
        for(ll i=0;i<a;i++){
            cout<<v1[i].second+1<<" "<<v2[i].second+1<<" "<<v3[i].second+1<<"\n";
        }
    }
    return 0;
}

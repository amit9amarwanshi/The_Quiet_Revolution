#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
int main(){
    ll t,n,n1,x,y,z,i,j,k,l,s=0;
    cin>>n;
    map<ll,ll>m;
    for(i=0;i<n;i++){
        cin>>x;
        cin>>m[x];
    }
    cin>>n1;
    map<ll,ll>m1;
    for(i=0;i<n1;i++){
        cin>>x;
        cin>>m1[x];
    }
    for(auto x:m){
        if(m1[x.first]==0) s+=x.second;
        else{
            if(m[x.first]>=m1[x.first]) s+=x.second;
        }
    }
    for(auto x:m1){
        if(m[x.first]==0) s+=x.second;
        else{
            if(m1[x.first]>m[x.first]) s+=x.second;
        }
    }
    cout<<s;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
int main(){
    ll n,k,t;
    cin>>t;
    while(t--){
        ll x1,x2,v1,v2,x3;
        cin>>x1>>x2>>x3>>v1>>v2;
        ll d1=x3-x1;
        ll d2=x2-x3;
        double t1=(double)d1/v1;
        double t2=(double)d2/v2;
       // cout<<t1<<" "<<t2<<"\n";
        if(t1>t2) cout<<"Kefa\n";
        else if(t2>t1) cout<<"Chef\n";
        else cout<<"Draw\n";
    }
    return 0;
}

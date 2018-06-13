#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
int main(){
    ll t,n,n1,a,b,c,j,temp,l,s=0;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        ll ca=0;
        ll cb=0;
        for(ll i=0;i<n;i++){
            cin>>temp;
            if(temp==a) ca++;
            if(temp==b) cb++;
        }
        double k1=(double) ca/n;
        double k2=(double) cb/n;
        double k=k1*k2;
        printf("%.10f\n",k);
    }
    return 0;
}

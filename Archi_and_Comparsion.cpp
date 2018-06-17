#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll long long int
int main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    ll n,i,j,cnt,k,a,b,l,ans;
    cin>>l;
    while(l--){
        cin>>a>>b>>n;
        if(n%2==0){
            if(abs(a)>abs(b)) cout<<1<<"\n";
            else if(abs(a)<abs(b)) cout<<2<<"\n";
            else cout<<0<<"\n";
        }
        else{
            if(a>=0&&b>=0){
                if(abs(a)>abs(b)) cout<<1<<"\n";
                else if(abs(a)<abs(b)) cout<<2<<"\n";
                else cout<<0<<"\n";
            }
            else if(a<0&&b<0){
                if(abs(a)<abs(b)) cout<<1<<"\n";
                else if(abs(a)>abs(b)) cout<<2<<"\n";
                else cout<<0<<"\n";
            }
            else if(a<0) cout<<2<<"\n";
            else cout<<1<<"\n";
        }
    }
    return 0;
} 

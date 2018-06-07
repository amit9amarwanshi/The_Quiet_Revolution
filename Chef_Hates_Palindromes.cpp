#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    string s,q="abc";
    while(t--){
        ll i,j,m,n,x,y;
        i=j=m=n=x=y=0;
        cin>>m>>n;
        if(n==1){
            cout<<m<<" ";
            for(i=0;i<m;i++) cout<<"a";
            cout<<"\n";
        }
        if(n==2){
            if(m==1) {
                cout<<1<<" "<<"a\n";
            }else if(m==2){
                cout<<1<<" "<<"ab\n";
            }else if(m==3){
                cout<<2<<" "<<"aab\n";
            }else if(m==4){
                cout<<2<<" "<<"aabb\n";
            }else if(m==5){
                cout<<3<<" "<<"abaaa\n";
            }else if(m==6){
                cout<<3<<" "<<"ababbb\n";
            }else if(m==7){
                cout<<3<<" "<<"aaababb\n";
            }else if(m==8){
                cout<<3<<" "<<"aaababbb\n";
            }else{ 
                 s="ababba";
                cout<<4<<" ";
                x=m/6;
                y=m%6;
                for(i=0;i<x;i++) cout<<s;
                for(i=0;i<y;i++) cout<<s[i];
                cout<<"\n";
            }
        }else if(n>2){
            x=m/3;y=m%3;
            cout<<"1 ";
            for(j=0;j<x;j++) cout<<q;
            for(i=0;i<y;i++) cout<<q[i];
            cout<<"\n";
        }
    }
    return 0;
} 

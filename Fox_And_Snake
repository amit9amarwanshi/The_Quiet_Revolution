#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,m,d,s=0,i,flag=0,j;
    cin>>n>>m;
    for(i=1;i<=n;i++){
        if(i%2!=0) for(j=1;j<=m;j++) cout<<"#";
        else{
            if(flag==0){
                for(j=1;j<m;j++) cout<<".";
                cout<<"#";flag=1;
            }else if(flag==1){
                cout<<"#";flag=0;
                for(j=1;j<m;j++) cout<<".";
            }
        }
        cout<<"\n";
    }
    return 0;
}

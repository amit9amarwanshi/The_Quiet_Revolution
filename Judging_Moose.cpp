#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long int
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
   cin>>n>>m;
    if(n==0&&m==0){
        cout<<"Not a moose";
    }
    else{
        if(n==m){
            cout<<"Even "<<n+m;
        }
        else if(n>m)
        {
            cout<<"Odd "<<n*2;
        }
        else{
            cout<<"Odd "<<m*2;
        }
    }
    return 0;
}

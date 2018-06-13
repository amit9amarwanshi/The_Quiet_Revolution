#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
#define ll unsigned long long 
ll pop(unsigned long long x)
{
    x = (x & 0x5555555555555555ULL) + ((x >> 1) & 0x5555555555555555ULL);
    x = (x & 0x3333333333333333ULL) + ((x >> 2) & 0x3333333333333333ULL);
    x = (x & 0x0F0F0F0F0F0F0F0FULL) + ((x >> 4) & 0x0F0F0F0F0F0F0F0FULL);
    return (x * 0x0101010101010101ULL) >> 56;
}
 
int main(){
    ll t,n,n1,x,y,z,i1,j1,i,j,k,l,s=0;
    cin>>t;
    while(t--){
        long long int ans=0;
       cin>>x>>y;
       i=pop(x);
       j=pop(y);
       i1=log2(x)+1;
       j1=log2(y)+1;
        if(x==y) cout<<"0\n";
        else if (y == 0) cout<<"-1\n";
        else if (y==1){ if(x==0) cout<<"1\n";
        else cout<<-1<<"\n";}
        else { ans=j-i+__builtin_ctzll(y);
           cout<<( ans > 0 ? ans : 2)<<"\n";
       }
      
    }
    return 0;
} 

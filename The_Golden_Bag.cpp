#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool prime[1000000+1];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
 
    for (ll p=2; p*p<=1000000; p++)
    {
        if (prime[p] == true)
        {
            for (ll i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    SieveOfEratosthenes();
    ll t,n,i,j,k,l;
    cin>>t;
    while (t--) {
        ll flag=0;
        cin>>n;
        for(i=n;i>0;i--) {
            if(prime[i]) {// cout<<i<<" ";
                for(j=2;j<i;j++)
                    if(prime[j]){// cout<<"\t"<<j<<" ";
                            if(i+j==n){flag=1;break;}
                            if(i+j>n) break;
                    }
                  //  cout<<"\n";
                    if(flag==1) break;
            }
        }
       cout<<j<<" "<<i<<"\n";
    }
    return 0;
}

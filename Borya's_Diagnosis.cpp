#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,i;
    cin>>n;
    ll a,b,sum;
    cin>>a>>b;
    sum=a;
    for(i=1;i<n;i++)
    {
      cin>>a>>b;
      if(sum>=a)
      {
         int j=1,s=a+b;
         while(sum>=s)
         {
             s=b*j+a;
             j++;
         }
         sum=s;
       }
       else sum=a;
    }
    cout<<sum;
    return 0;
}

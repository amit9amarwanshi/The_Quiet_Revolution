#include <iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,i,j,k,sum1,sum2;
    cin>>n;
    k=n;
    int a[n];
    for(i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;++i)
    {
        sum1=0;
        sum2=0;
        for(j=0;j<k-1;++j)
        {
            sum1+=a[j];
        }
        for(j=n-1;j>k-2;--j)
        {
            sum2+=a[j];
        }
        if(sum2>sum1) break;
        k--;
    }
    cout<<i+1;
    return 0;
}

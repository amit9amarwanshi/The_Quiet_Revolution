#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int n,i;
    cin>>n;
    long int a[n],b[n],c[n],sum1=0,sum2=0,sum3=0;
    for(i=0;i<n;i++) cin>>a[i]>>b[i]>>c[i];
    for(i=0;i<n;i++)
    {
        sum1+=a[i];
        sum2+=b[i];
        sum3+=c[i];
    }
    if(sum1==0&&sum2==0&&sum3==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
	return 0;
}

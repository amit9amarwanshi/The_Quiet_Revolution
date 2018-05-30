#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,l=0,j=0,i=0;
    cin>>n;
    char p[n],s[n];
    for(i=0;i<n;i++) cin>>s[i];
    for(i=0,j=n-1;i<n;i+=2)
    {
        p[l]=s[n-2-i];
        p[j]=s[n-1-i];
        l++;j--;
    }
    for(i=0;i<n;i++) cout<<p[i];
    return 0;
 }

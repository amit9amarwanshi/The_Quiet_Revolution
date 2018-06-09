#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t,w,i,b;
    cin>>t;
    string s;
    while(t--)
    {
        int a[7]={4,4,4,4,4,4,4};
        cin>>w;
        cin>>s;
        b=w%7;
        if(s=="mon") i=0;
        else if(s=="tues") i=1;
        else if(s=="wed") i=2;
        else if(s=="thurs") i=3;
        else if(s=="fri") i=4;
        else if(s=="sat") i=5;
        else i=6;
       while(b>0)
        {
            ++a[i];
            ++i;
            if(i==7)  i=0;
            --b;
        }
        for(i=0;i<7;++i)
        cout<<a[i]<<" "; cout<<"\n";
    }
    return 0;
}  

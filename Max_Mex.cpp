#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ll test,i,k,n,p;
	cin>>test;
	while(test--)
	{
	    cin>>n>>k;
	    ll a[n];
	    for(i=0;i<n;i++)
	    {
	    cin>>a[i];
	    }
	    sort(a,a+n);
	    if(k==0)
	    {
	        p=k;
	        for(i=0;i<n;i++)
	        {
	            if(a[i]==p)
	            p++;
	            else
	            {
	                cout<<p<<"\n";
	                break;
	            }
	        }
	        if(p>a[n-1]){
	        cout<<p<<"\n";
	        }
	    }
	    else
	    {
	        p=k;
	        for(i=0;i<n;i++)
	        {
	            if(a[i]<=p)
	            {
	                if(i==0||(i>0&&a[i]!=a[i-1]))
	                p++;
	            }
	        }
	        cout<<p<<"\n";
	    }
	}
	
	return 0;
} 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int m,i,j,p,x;
	cin>>m;
	int a[m];
	int n;
	for(i=0;i<m;i++)
	cin>>a[i];
	cin>>n;
	int b[n];
	for(i=0;i<n;i++)
	cin>>b[i];
	sort(a,a+m);
	sort(b,b+n);
	p=0;
	for(i=0;i<m;i++)
	{ 
	    x=0;
	    for(j=0;j<n;j++)
	    {
	        if(b[j]==a[i]||b[j]+1==a[i]||b[j]-1==a[i])
	        {
	        x++;
	        b[j]=-1;
	        break;
	        }
	    }
	    if(x==1)
	    p++;
	}
	cout<<p<<endl;
	return 0;
}

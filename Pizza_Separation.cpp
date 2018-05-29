#include<bits/stdc++.h>

using namespace std;

int main(){
    int j,isum=0,n,a[1000],i,min1=360;
    cin>>n;
    for(i=0;i<n;i++){
    cin>>a[i];
    if(i>=1)
    a[i]+=a[i-1];
	}
    for(i=0;i<n;i++){
    	for(j=0;j<i;j++){
    		isum=abs(a[i]-a[j]);
    		min1=min(min1,abs(2*isum-360));
		}
	}
	cout<<min1;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned int a,b,count=0,i,j;
    cin>>a;
    int arr[a],brr[a];
    for(i=0;i<a*2;i++) cin>>arr[i]>>brr[i];
    for(i=0;i<a;++i)
    {
        for(j=0;j<a;j++)
    {
        if(arr[i]==brr[j])
          {
         count++;
          }
    }
    }
    cout<<count;
	return 0;
}

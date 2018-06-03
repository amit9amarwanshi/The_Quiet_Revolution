#include <bits/stdc++.h>
using namespace std;
 
int main() {
   unsigned int t,n,k,count=0,i;
   cin>>t;
   while(t--)
    {
        cin>>n>>k;
        unsigned int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=k)
            {
                count++;
            }
        }
        cout<<count<<"\n";
        count=0;
    }
	return 0;
}

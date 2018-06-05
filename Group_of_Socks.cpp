#include <bits/stdc++.h>
using namespace std;
#define ll long int
int main() {
    ios::sync_with_stdio(false);
    ll a[3],m,i;
    cin>>a[0]>>a[1]>>a[2];
    m=a[0];
    for(i=1;i<3;i++){
        if(m>a[i])
        {
          m=a[i];  
        }
    }
    cout<<m;
	return 0;
}  

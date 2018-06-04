#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll t,y,b,c,a,i;
	cin>>t;
	while(t--){
	    cin>>y;
	    a = sqrt(y);
	    c=0;
	    for(i=a;i>0;i--){
            b= y-i*i;
            if(b>700){
            b=700;
            c+=b*(i);
            break;
            }
            c+=b;
	    }
	    cout<<c<<"\n";
	}
    return 0;
}

#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
	int x;
	cin>>x;
	int n;
	double m;
	if(x<=20)
	{
	    while(x--)
	    {
	        cin>>n;
	        m=sqrt(n);
	        m=(int)m;
	        cout<<m<<"\n";
	    }
	}
	return 0;
}

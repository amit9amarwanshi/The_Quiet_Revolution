#include <iostream>
#include<math.h>
using namespace std;
 
int main() {
    int x;
    cin>>x;
    int n,v1,v2;
    if(x<=1000)
    {
        while(x--)
        {
            float temp1;
            float temp2=1;
            cin>>n;
            cin>>v1>>v2;
            temp1=sqrt(2)*n;
            temp1/=v1;
            
            temp2=2*n;
            temp2/=v2;
            
            if(temp2>temp1)
            {
                cout<<"Stairs\n";
            }
            else if(temp1>=temp2)
            {
                cout<<"Elevator\n";
            }
        }
    }
	return 0;
}

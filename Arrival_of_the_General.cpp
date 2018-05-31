#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,i,max,min,a1=0,b=0,c;
    cin>>n;
    int a[n];
  cin>>a[0];
    max=a[0];
    min=a[0];
    for(i=1;i<n;++i)
    {
        cin>>a[i];
        if(max<a[i])
        {
                max=a[i];
                a1=i;
         }
        if(min>=a[i])
        {
          min=a[i];
          b=i;
        }
    }
// cout<<a1<<b<<endl;
if(a1>=b)
{
    b=n-1-b;
 //   cout<<b<<endl;
    c=a1+b-1;
}
else {
        b=n-1-b;
        c=a1+b;
}
cout<<c;

    return 0;
}

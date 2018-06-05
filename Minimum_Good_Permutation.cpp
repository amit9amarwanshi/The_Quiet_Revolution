#include <iostream>
 
using namespace std;
 
 
int main()
{
    unsigned int x,n,temp,i;
    cin>>x;
    while(x--)
        {
           cin>>n;
           int a[n];
           for(i=0;i<n;i++)
           {
               a[i]=i+1;
           }
           if(n%2==0)
           {
               for(i=0;i<n;i=i+2)
               {
                    temp=a[i];
                    a[i]=a[i+1];
                    a[i+1]=temp;
               }
           }
           else
           {
               for(i=0;i<n-1;i=i+2)
               {
                       temp=a[i];
                       a[i]=a[i+1];
                       a[i+1]=temp;
               }
               temp=a[n-1];
               a[n-1]=a[n-2];
               a[n-2]=temp;
            }
           for(i=0;i<n;++i)cout<<a[i]<<" ";
           cout<<endl;
        }
 
 
    return 0;
} 

#include<iostream>
using namespace std;
int main()
{
   unsigned int x,k,l,n;
    cin>>x;
    while(x--)
    {
        cin>>n;
        unsigned int arr[n],min;
        for(k=0;k<n;k++)
        {
            cin>>arr[k];
           
        }
        for(l=0;l<n;l++)
        {
           
          if(l==0)
          {
              min=arr[l];
              k=l;
          }
          if(min>arr[l])
          {
              min=arr[l];
              k=l;
              
          }
            
        }
        cout<<k+1<<"\n";
 
    }
    return 0;
}

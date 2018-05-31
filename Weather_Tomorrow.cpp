#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,i,j=0,count=0,final,c=0;
    cin>>n;
    int p[n],q[n-1];
    for(i=0;i<n;++i)
    {
       cin>>p[i] ;
       if(i>0)
      {
          q[0]=p[1]-p[0];
          if(q[0]<0) c++;
          q[j]=abs(p[i]-p[i-1]);
          j++;
       }
    }
     q[0]=abs(p[1]-p[0]);

  //  cout<<c;
  //  for(j=0;j<n-1;++j) cout<<q[j]<<" ";
    for(j=1;j<n-1;++j)
    {
        if(q[j]==q[0])
        {
            count++;
        }
    }// cout<<count;
    if(count==(n-2)&&c==0)
     {
         final=p[n-1]+q[0];

     }
     else if(count==(n-2)&&c!=0)
     {
         final=p[n-1]-q[0];

     }
    else
        final = p[n-1];
    cout<<final;
    return 0;
}

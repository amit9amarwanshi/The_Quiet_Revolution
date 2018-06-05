#include <iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
#include<algorithm>
#include<string>
using namespace std;
 
int main()
{
   unsigned int q,t,n,p,i=0,j,k=0;
   double l,m;
   cin>>t;
   while(t--)
   {
       q=0,j=0;
       cin>>n>>p;
       l=p/2;
       m=p/10;
       for(i=0;i<n;i++)
       {
           cin>>k;
           if(k>=l)
           {
               q++;
           }
           else if(k<=m)
           {
               j++;
           }
       }
       if(q==1&&j==2)
       {
           cout<<"yes\n";
       }
       else
       {
           cout<<"no\n";
       }
   }
    return 0;
} 

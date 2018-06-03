#include <iostream>
#include<vector>

using namespace std;

int main()
{
    
       string s;
       cin>>s;
       int x=s.length();
       if(x==1)
       {
           cout<<s;
       }
       else
       {
           unsigned int i,m=0,n=0,l=0,j;
           for(i=0;i<x;i++)
           {
               if(s[i]=='1')
               {
                   m++;
               }
               else if(s[i]=='2')
               {
                   n++;
               }
               else if(s[i]=='3')
               {
                   l++;
               }
           }
          
           unsigned int d[m+n+l];
           i=0;
           while(m>0)
           {
               d[i]=1;
               i++;
               m--;
           }
           while(n>0)
           {
               d[i]=2;
               i++;
               n--;
           }
           while(l>0)
           {
               d[i]=3;
               i++;
               l--;
           }
           for(j=0;j<i-1;j++)
           {
               cout<<d[j]<<"+";
           }
           cout<<d[j];
       }
       return 0;
}

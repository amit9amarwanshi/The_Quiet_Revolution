#include <iostream>
#include<string>

using namespace std;

int main()
{
   unsigned int n,x;
   cin>>n;
   if(n<101)
   {
   while(n--)
   {
       string s;
       cin>>s;
       x=s.length();
      if(x<101)
     {  if(x>10)
       {
           cout<<s[0]<<x-2<<s[x-1];
       }
       else
       {
           cout<<s;
       }

     }
      cout<<"\n";
   }
   }
    return 0;
}

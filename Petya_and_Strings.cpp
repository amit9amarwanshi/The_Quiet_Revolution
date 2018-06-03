#include <iostream>
#include<vector>

using namespace std;

int main()
{
    
       string s,q;
       cin>>s>>q;
       int i ,x[s.length()],y[q.length()],a=0,b=0;
       for(i=0;i<s.length();i++)
       {
           s[i]=tolower(s[i]);
           q[i]=tolower(q[i]);
            x[i]=(int)s[i];
            y[i]=(int)q[i];
       }
      
      for(i=0;i<s.length();i++)
      {
       if(x[i]<y[i])
       {
          a++;
          break;
       }
       else if(x[i]>y[i])
       {
          b++;
          break;
       }
      }
      if(b>0)
      {
          cout<<"1";
      }
      else if(a>0)
      {
          cout<<"-1";
      }
      else
      {
          cout<<"0";
      }
    return 0;
}

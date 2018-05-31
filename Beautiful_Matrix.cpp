#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a[27],i,y;
    for(i=1;i<=26;i++)
    {
        cin>>a[i];
        
    }
    for(i=1;i<=26;i++)
    {
      if(a[i]==1)
      {
          break;
      }
    }
    if(i==1||i==5||i==21||i==25)
    {
        cout<<4;
    }
    else if(i==2||i==4||i==6||i==10||i==20||i==24||i==22||i==16)
    {
        cout<<3;
    }
    else if(i==3||i==9||i==7||i==17||i==23||i==19||i==15||i==11)
    {
        cout<<2;
    }
    else if(i==13)
    {
        cout<<0;
    }
    else{
        cout<<1;
    }
    return 0;
}

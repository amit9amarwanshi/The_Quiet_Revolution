#include<bits/stdc++.h>
using namespace std;

int main()
{
    unsigned int n,count=0,j,i=0,a[5]={0};
    cin>>n;
    if(n%4==0)
    {
        count++;
    }
    else if(n%7==0)
    {
        count++;
    }
    else if(n%47==0)
    {
        count++;
    }
    else if(n%74==0)
    {
        count++;
    }
    else
    {
        j=0;
    do {
    int digit = n % 10;
    a[j]=digit;
    j++;
    n /= 10;
} while (n > 0);
    for(int i=0;i<4;i++)
    {
        if(a[i]!=0)
        {
             if(a[i]==4||a[i]==7)
             {
              count++;
             }
             else{
                 count=0;
                 break;
             }
             
         }
        else
        {
            continue ;
        }
     
    }
    }
    x:
    if(count!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}

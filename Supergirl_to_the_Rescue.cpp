#include <bits/stdc++.h>
using namespace std;
bool check(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    for (int i = 0; i < n; i += 2)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
   if (check(arr, n))
       printf("Yes");
   else
       printf("No");       
   return 0;
} 

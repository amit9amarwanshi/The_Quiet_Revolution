#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
 
// A comparison function which is used by sort() in largestNumber()
int Compare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);
 
    // then append X at the end of Y
    string YX = Y.append(X);
 
    // Now see which of the two formed numbers is greater
 	if (XY > YX)
 	{
 		return 1;
 	}
 	else
 	{
 		return 0;
 	}
    
}
void largestNumber(string  arr[], int n)
{
    sort(arr, arr+n, Compare);
    for (int i=0; i < n ; i++ )
        cout << arr[i];
}
 
int main()
{
    int n,i;
    cin>>n;
    string arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    largestNumber(arr, n);
     return 0;
} 

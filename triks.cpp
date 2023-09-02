#include<bits/stdc++.h>
using namespace std;
int main()
{
int x=2;
int arr[]={1,2,2,2,2,2,3,5,5,6,8,7};
auto n=sizeof(arr)/sizeof(arr[0]);
auto a=(lower_bound(arr, arr+n, x));
cout<<*a;
// cout<upper_bound(arr, arr+n, x);
return 0;
}


// return (upper_bound(arr, arr+n, x) - lower_bound(arr, arr+n, x));
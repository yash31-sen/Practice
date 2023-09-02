#include<bits/stdc++.h>
using namespace std;
int fab(int n){
if(n==0){
    return 0;
}
int ans=fab(n-1)*fab(n-2);

return ans;
}
int main() 
{
cout<<fab(5);
return 0;
}
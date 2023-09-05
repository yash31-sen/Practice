// #include<bits/stdc++.h>
// using namespace std;
// int fac(int n){
//     if(n==0){
//         return 1;
//     }
//     int c=fac(n-1);
//     int b=n*c;
//     return b;
// }
// int main(){
//     cout<<fac(5);
//     return 0;
// }

// PRogream 2
// #include <bits/stdc++.h>
// using namespace std;
// void rec(int s,int d){
//       cout<<s<<" "<<d<<endl;
//     if(s==d){
//         cout<<"Reached! "<<endl;
//         return ;
//     }

//     s++;
//     rec(s,d);

// }

// int main(){
//     int s=2;
//     int d=4;
//     rec(s,d);
// }

// Fibonacci series:

// 0,1,1,2,3,5,8,13,21
//  #include<iostream>
//  using namespace std;
//  int rec(int n){
//      if(n==0){
//          return 0;
//      }
//      if(n==1){
//          return 1;
//      }
//      int ans=rec(n-1)+rec(n-2);
//      cout<<n<<" "<<endl;
//      return ans;
//  }

// int main(){
//     int n;
//    cout<< rec(8);
// }

// say digit
// #include <bits/stdc++.h>
// using namespace std;

// void rec(int n, string say[])
// {
//     if (n == 0)
//     {
//         return;
//     }
//     int digit = n % 10;
//     n = n / 10;
//     rec(n, say);
//     cout << say[digit] << " ";
// }

// int main()
// {
//     string say[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
//     rec(34568, say);
//     return 0;
// }

// soprted array
//  #include<bits/stdc++.h>
//  using namespace std;
//  bool isSorted(int arr[],int n){
//  bool isSorted(int *arr,int n){
//      if(n==0||n==1){
//          return true;
//      }

//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool remainingPart=isSorted(arr+1,n-1);
//         return remainingPart;
//     }
// }
// int main()
// {
// int n=5;
// int arr[n]={1,1,5,6,10};
// bool ans=isSorted(arr,n);
// cout<<ans;
// return 0;
// }

// getsum of array
// #include<bits/stdc++.h>
// using namespace std;

// int getSum(int *arr,int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return arr[0];
//     }
//     int remainingPart=getSum(arr+1,n-1);
//     int ans=arr[0]+remainingPart;
//     return ans;
// }
// int main()
// {
// int n=5;
// int arr[n]={1,1,5,6,10};

// cout<<getSum(arr,n);
// return 0;
// }

// linear search on array;

// #include <bits/stdc++.h>
// using namespace std;
// bool searchElem(int *arr, int n, int k)
// {
//     if (n == 0)
//     {
//         return false;
//     }
//     if (arr[0] == k)
//     {
//         return true;
//     }
//     else
//     {
//         bool remainingAns = searchElem(arr + 1, n - 1, k);
//         return remainingAns;
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[n] = {3, 5, 1, 2, 6};
//     int k = 0;
//     bool ans = searchElem(arr, n, k);
//     if (ans)
//     {
//         cout << "Found";
//     }
//     else
//     {
//         cout << "Not Found";
//     }
//     return 0;
// }

// Binary Search (Arrya Must be sorted);

// #include <bits/stdc++.h>
// using namespace std;

// bool binarySearch(int arr[], int start, int end, int k)
// {
//     if (start > end)
//     {
//         return false;
//     }
//     int mid = start + (end - start) / 2;
//     if (arr[mid] == k)
//     {
//         return true;
//     }
//     if (arr[mid] < k)
//     {
//         return binarySearch(arr, mid + 1, end, k);
//     }
//     else
//     {
//         return binarySearch(arr, start, mid - 1, k);
//     }
// }
// int main()
// {
//     int n = 5;
//     int arr[n] = {0, 1, 2, 3, 4, 6};
//     int k = 1;
//     bool ans = binarySearch(arr, 0, n - 1, k); // start index and end index
//     if (ans)
//     {
//         cout << "Found";
//     }
//     else
//     {
//         cout << "Not Found";
//     }
//     return 0;
// }

// Recurssion With String
// reversal of string
// #include <bits/stdc++.h>
// using namespace std;
// void revString(int i, int j, string &s)
// {
//     if (i > j)
//     {
//         return;
//     }
//     swap(s[i], s[j]);
//     i++;
//     j--;
//     swap(s[i], s[j]);
// }
// int main()
// {
//     string s = "yash";
//     revString(0, s.size() - 1, s);
//     cout << s;
//     return 0;
// }

// string palindrome check
//  #include<bits/stdc++.h>
//  using namespace std;
//  bool isPalindrome(string &s,int i,int j){
//      if(i>j){
//          return true;
//      }
//      if(s[i]!=s[j]){
//          return false;
//      }
//      else{
//      return isPalindrome(s,i+1,j-1);
//      }
//  }
//  int main()
//  {
//  string s="abbca";
//  bool res=isPalindrome(s,0,s.size()-1);
//  cout<<res;
//  return 0;
//  }

//  calculating power using recurrsion
// optimized approach:
//      -> if p is even then ans=n^(p/2)*n^(p/2)
//      -> if p is odd then ans=n*n^(p/2)*n^(p/2)
// #include <bits/stdc++.h>
// using namespace std;
// int pow(int n, int p)
// {
//     if (p == 0)
//     {
//         return 1;
//     }
//     if (p == 1)
//     {
//         return n;
//     }
//     int ans = pow(n, p / 2);

//     if (p % 2 == 0)
//     {
//         return ans * ans;
//     }
//     else
//     {
//         return n * ans * ans;
//     }
// }
// int main()
// {
//     int num = 3;
//     int p = 2;
//     int ans = pow(num, p);
//     cout << ans;
//     return 0;
// }

// Bubble Sort
// it has a number of rounds
//-> in each round the largest element goes to the n-1 poisition
//-> ans same process continues untill the array get sorted
// time complexity ->O(n^2)
// space -> O(1)
// with recurrsion aux space tiem complexity -> O(n)

// #include <bits/stdc++.h>
// using namespace std;
// void sortArray(int a[], int n)
// {
//     if (a.size() == 0 || a.size() == 1)
//     {
//         return 1;
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         if (a[i] > a[i + 1])
//         {
//             swap(a[i], a[i + 1]);
//         }
//     }
//     sortArray(a, n - 1);
// }
// int main()
// {
//     int arr[5] = {2, 4, 3, 1, 0};

//     return 0;
// }

// bubble sort iterative:

// #include <bits/stdc++.h>
// using namespace std;

// void bubSort(int a[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }

// int main()
// {
//     int n = 5;
//     int arr[n] = {1, 3, 2, 4, 5};
//     bubSort(arr, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    cout<<a;
    int a=4;
    return 0;
    }
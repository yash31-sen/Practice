// // count number of words in a string not having vowels in it.
// // *********************************************************
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     string s = "My name sis yash and i a my";
//     int n = s.size();
//     int i = 0, j = 0, k = 0, c = 0;

//     while (i < n)
//     {
//         while (j < n && s[j] != ' ')
//         {
//             k++;
//             j++;
//         }

//         bool chk = false;
//         for (int p = i; p < i + k; p++)
//         {
//             if (s[p] != 'a' && s[p] != 'e' && s[p] != 'i' && s[p] != 'o' && s[p] != 'u')
//             {
//                 chk = true;
//             }
//             else
//             {
//                 chk = false;
//                 break;
//             }
//         }

//         if (chk)
//         {
//             c++;
//         }

//         i = j + 1;
//         j = i;
//         k = 0;
//     }

//     cout << c;
//     return 0;
// }

// // // Do not delete
// // //*********************************************************************************************************************************************

// #include <bits/stdc++.h>
// using namespace std;

// int countNonVowel(vector<string> v)
// {
//     int c = 0;
//     bool t = false;
//     for (auto i : v)
//     {
//         for (int j = 0; j < i.size(); j++)
//         {
//             if (i[j] != 'a' && i[j] != 'e' && i[j] != 'i' && i[j] != 'o' && i[j] != 'u')
//             {
//                 t = true;
//             }
//             else
//             {
//                 t = false;
//                 break;
//             }
//         }
//         if (t == true)
//         {
//             c++;
//             t = false;
//         }
//     }
//     return c;
// }

// int main()
// {
//     string s = "ydsh sdn this ds dsdf d";
//     s += " ";
//     vector<string> v;
//     string temp = "";
//     for (int i = 0; i <= s.size(); i++)
//     {
//         if (s[i] != ' ')
//         {
//             temp += s[i];
//         }
//         else
//         {
//             v.push_back(temp);
//             temp = "";
//         }
//     }

//     int t = countNonVowel(v);
//     cout << t;
//     return 0;
// }

// // prime factor of number
// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << "yash";
//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;
int main()
{
string s="aanchal";
int n=s.size();
string ans="";
// for(int i=0;i<n;i++){
  
// }


int a1=int('a')+97;
char a2=char(a1);
cout<<a2-'0';
return 0;
}
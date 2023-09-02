// #include <bits/stdc++.h>
// using namespace std;
// void fileSys(vector<string> &s, int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         // cout<<s[i]<<" : ";
//         for (int j = i+1; j < n; j++)
//         {
//             if (s[i] == s[j])
//             {
//                 count++;
//                 s[j] = s[i] + to_string(count);
//                 // cout << s[i]+to_string(count) << " ";
//             }
//             // cout<<s[j]<<" ";
//         }
//         count = 0;
//         // cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<string> s;
//     for (int i = 0; i < n; i++)
//     {
//         string temp = "";
//         cin >> temp;
//         s.push_back(temp);
//     }
// fileSys(s,n);
//     for (string i : s)
//     {
//         cout << i << " ";
//     }
//     return 0;
// }
// // home download first first

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fileSys(vector<string> &s, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i] == s[j])
            {
                count++;
                s[j] = s[i] + to_string(count);
            }
        }
        count = 0;
    }
}

int main()
{
     int n;
    cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++)
    {
        string temp = 0;
        cin >> temp;
        s.push_back(temp);
    }
    fileSys(s, n);
    for (string i : s)
    {
        cout << i << " ";
    }
    return 0;
}
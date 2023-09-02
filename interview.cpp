// important codes that ay be asked during interviews

#include <bits/stdc++.h>
using namespace std;
void helper(string S, vector<string> &s, int idx)
{
    if (idx >= S.size())
    {
        s.push_back(S);
        return;
    }
    for (int i = idx; i < S.size(); i++)
    {
        swap(S[idx], S[i]);
        helper(S, s, idx + 1);
        // backtracking
        swap(S[idx], S[i]);
    }
}

vector<string> perm(string S)
{
    int idx = 0;
    vector<string> s;
    helper(S, s, idx);
    return s;
}

int main()
{
    string S;
    cin >> S;
    vector<string> ans = perm(S);
    // cout<<ans.size();
    for (auto i : ans)
    {
        cout << i << " ";
    }
}
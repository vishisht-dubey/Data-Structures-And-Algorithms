// https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1?page=1&difficulty[]=1&category[]=Strings&sortBy=submissions

#include <bits/stdc++.h>
using namespace std;

void permute(string S, string dummy, set<string> &s)
{
    if (S.length() == 0)
    {
        s.insert(dummy);
        return;
    }
    else
    {
        for (int i = 0; i < S.length(); i++)
        {
            char ch = S[i];
            string left = S.substr(0, i);
            string right = S.substr(i + 1);
            string final = left + right;
            permute(final, dummy + ch, s);
        }
    }
    return;
}

vector<string> find_permutation(string S)
{
    // Code here there
    set<string> s;
    string dummy = "";
    permute(S, dummy, s);
    vector<string> result(s.begin(), s.end());
    return result;
}

int main()
{
    string A = "JAHNAVi";
    vector<string> x = find_permutation(A);
    // for (int i = 0; i < x.size(); i++)
    // {
    //     cout << x[i] << " ";
    // }
    // cout << endl;
    cout<<x.size()<<endl;
    return 0;
}
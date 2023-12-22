#include <bits/stdc++.h>
using namespace std;

int compareStrings(string s1, string s2)
{
    set<char> a1;
    set<char> a2;
    int count = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        a1.insert(s1[i]);
    }
    for (int i = 0; i < s2.length(); i++)
    {
        a2.insert(s2[i]);
    }
    for (auto i : a1)
    {
        if (a2.find(i) != a2.end())
            count++;
    }
    if(count<2)
    return 2;
    else if(count>=2&&count<=5)
    return 10;
    else if(count>5)
    return 15;
    return -1;
}

int main()
{
    string a = "unberry";
    string b = "blueberry";
    cout << compareStrings(a, b) << endl;
    return 0;
}
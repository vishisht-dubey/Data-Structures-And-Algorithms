#include <bits/stdc++.h>
using namespace std;

string dreamy()
{
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> m;
    for (int j = 0; j < n; j++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        m[x]++;
    }
    if (m.size() == 1)
        return "YES\n";
    else if (m.size() == 2)
    {
        for (auto it = m.begin(); it != m.end(); it++)
        {
            if (it->second == n / 2)
            {
                return "YES\n";
            }
        }

        return "NO\n";
    }
    else
    {
        return "NO\n";
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cout<<dreamy();    
    }
    return 0;
}
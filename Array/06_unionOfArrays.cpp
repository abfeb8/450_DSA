#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    unordered_set<int> s1;
    for (int i = 0; i < n + m; i++)
    {
        int temp;
        cin >> temp;
        s1.insert(temp);
    }
    cout << s1.size() << endl;
}

int main()
{
    //code
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
    return 0;
}
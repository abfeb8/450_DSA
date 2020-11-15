#include <bits/stdc++.h>
using namespace std;

bool checkPalindrom(string test)
{
    int n = test.size();
    for (int i = 0; i < n; i++)
    {
        if (test[i] != test[n - i - 1])
        {
            cout << test << ": " << "Not a Palindrom" << endl;
            return false;
        }
    }
    cout << test << ": " << "Palindrom" << endl;
    return true;
}

int main()
{
    string test1 = "abcba", test2 = "bccaab", test3 = "a";
    checkPalindrom(test1);
    checkPalindrom(test2);
    checkPalindrom(test3);
    return 0;
}
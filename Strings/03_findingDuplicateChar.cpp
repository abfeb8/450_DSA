#include <bits/stdc++.h>
using namespace std;

void findDuplicate(string str)
{
    map<char, int> dict;
    for (char i : str)
    {
        if (dict[i])
        {
            dict[i] += 1;
        }
        else
        {
            dict[i] = 1;
        }
    }

    // printing duplicate characters
    cout << "Duplicate characters are: ";
    for (auto i : dict)
    {
        int n = i.second;
        if (n > 1)
        {
            printf("('%c', %d) ", char(i.first), i.second);
        }
    }
    cout << endl;
}

int main()
{
    string str = "apples are red";
    findDuplicate(str);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<int> valueEqualToIndex(int arr[], int n)
{
    vector<int> result;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == i)
        {
            result.push_back(i);
        }
    }
    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return result;
}

int main()
{
    int arr[10] = {0, 3, 2, 5, 4, 8, 5, 2, 6, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    valueEqualToIndex(arr, n);
    return 0;
}
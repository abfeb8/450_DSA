#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> arr, int n, int k)
{
    int rarr[n];
    for (int i = 0; i < n; i++)
    {
        if (i + k < n)
        {
            rarr[i + k] = arr[i];
        }
        else
        {
            rarr[i + k - n] = arr[i];
        }
    }
    for (int i : rarr)
        cout << i << " ";
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8, 9, 10};
    // k is the number by which to rotate array
    int k = 3;
    int n = arr.size();
    rotate(arr, n, k);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void kadanes_MaxSubArraySum(vector<int> arr, int n)
{
    int max_sum = 0, current_max = 0;
    int start = 0, end = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        current_max = max(arr[i], current_max + arr[i]);
        max_sum = max(max_sum, current_max);
    }
    cout << max_sum << endl;
}


int main()
{
    vector<int> arr = {-2, 1, 3, -5, 2, 4, -3, 4, 1};
    int n = arr.size();
    kadanes_MaxSubArraySum(arr, n);
    return 0;
}
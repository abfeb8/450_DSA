#include <bits/stdc++.h>
using namespace std;

void findKthMinMax(vector<int> arr, int n, int k)
{
    sort(arr.begin(), arr.begin() + n);
    cout << "Kth Min: " << arr[k - 1] << "\nKth Max: " << arr[n - k - 1] << endl;
}

int main()
{
    vector<int> arr = {4, 3, 6, 7, 2, 36, 1, 765, 3, 8, 5, 99, 11, 23};
    int k = 3, n = arr.size();
    findKthMinMax(arr, n, k);
    return 0;
}

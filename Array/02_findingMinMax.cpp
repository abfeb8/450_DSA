#include <bits/stdc++.h>
using namespace std;

void findMinMax(int arr[], int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Min: " << min << "\nMax: " << max;
}

int main()
{
    int arr[] = {4, 3, 6, 7, 2, 33, 4, 1, 90, 4, 2, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, n);
}
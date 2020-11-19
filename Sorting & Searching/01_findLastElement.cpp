#include <bits/stdc++.h>
using namespace std;

void findLastElement(int arr[], int n)
{
    int lastElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lastElement)
        {
            lastElement = arr[i];
        }
    }
    printf("Last element is: %d", lastElement);
}

int main()
{
    int arr[5] = {1, 3, 9, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLastElement(arr, n);
    return 0;
}
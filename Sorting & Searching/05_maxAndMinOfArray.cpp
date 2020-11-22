#include <bits/stdc++.h>
using namespace std;

pair<int,int> findMid(int arr[], int start, int end){
    pair<int, int> result;
    if(start == end){
        result.first = arr[start];
        result.second = arr[start];
        return result;
    }
    if(start == end+1){
        if(arr[0]>arr[1]){
            result.first = arr[end];
            result.second = arr[start];
            return result;
        }else{
            result.first = arr[start];
            result.second = arr[end];
            return result;
        }
    }
    int mid = (start + end) / 2;
    pair<int,int> left = findMid(arr, start, mid);
    pair<int,int> right =  findMid(arr, mid+1, end);

    if(left.first<right.first){
        result.first = left.first;
    }else{
        result.first = right.first;
    }

    if(left.second>right.second){
        result.second = left.second;
    }else{
        result.second = right.second;
    }
    return result;
}

int main(){
    int arr[] = {6,5,89,2,5,8,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    pair<int,int> minMax = findMid(arr, 0, n-1);
    printf("Mid: %d, Max: %d", minMax.first, minMax.second);
    return 0;
}
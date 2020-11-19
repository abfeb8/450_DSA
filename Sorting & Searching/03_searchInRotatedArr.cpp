#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target){
    int index = 0;
    for(auto i : nums){
        if(i==target){
            return index;
        }
        index++;
    }
    return -1;
}

int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    printf("%d\n",search(arr, 7));
    printf("%d\n",search(arr, 3));
    return 0;
}
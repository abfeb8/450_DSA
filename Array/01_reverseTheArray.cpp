#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> arr, int n){
	for(int i = 0; i<n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

vector<int> reverseVector(vector<int> arr, int n){
	vector<int> rarr;
	for (int i = n-1; i >= 0; i--){
		rarr.push_back(arr[i]);
	}
	return rarr;
}

int main(){
	vector<int> arr1 = {1, 2, 3, 4, 5};
	int n = arr1.size();
	vector<int> rarr = reverseVector(arr1,n);
	printVector(rarr,n);
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

void reverse(string str){
    int start = 0, end = str.size()-1;
    
    while(start<end){
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
    cout << str;
}

int main(){
    string str = "Hello World";
    reverse(str);
    return 0;
}
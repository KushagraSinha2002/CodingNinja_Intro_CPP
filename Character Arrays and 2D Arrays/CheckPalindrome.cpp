#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[]) {
    int n = strlen(str);
    int j = n-1;
    int i = 0;

    for(i; i < n/2; i++){
        if(str[i] != str[j]){
            return false;
        }
        j--;
    }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
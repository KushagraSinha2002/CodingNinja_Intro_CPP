#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(char str[]){
    for(int start = 0; str[start] != '\0'; start++){
        for(int end = start; str[end] != '\0'; end++){
            for(int i = start; i <= end; i++){
                cout << str[i];
            }
            cout << endl;
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
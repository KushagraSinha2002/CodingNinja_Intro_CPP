#include <iostream>
#include <cstring>
using namespace std;

void reverse(char input[], int start, int end){
    for(start; start < end ; start++){
        swap(input[start],input[end]);
        end--;
    }
}

void reverseEachWord(char input[]) {
    int start = 0, end = 0,i;
    
    for(i = 0; input[i] != '\0'; i++){
        if(input[i] == ' '){
            end = i-1;
            reverse(input, start, end);
            start = i+1;
        }
    }
    end = i-1; 
    reverse(input, start, end);
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}
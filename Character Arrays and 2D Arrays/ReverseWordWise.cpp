#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char input[], int size, int start, int end){
    while(start <= end) {
        swap(input[start++], input[end--]);
    }
}

void reverseStringWordWise(char input[]) {
    int size = strlen(input);
    int start = 0;
    int end = size - 1;
    reverseString(input, size, start, end);

    start = 0, end = 0;
    for(int i = 0; input[i] != '\0'; i++){
        if(input[i] == ' '){
            end = i-1;
            reverseString(input, size, start, end);
            start = i + 1;
        }
    }
    end = size -1;
    reverseString(input, size, start, end);
}

int main() {
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}

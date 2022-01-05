#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char input[]) {
    char check = input[0];
    int j = 1;
    for(int i = 1; input[i] !='\0'; i++){
        if(input[i] == check){
            continue;
        }
        else{
            check = input[i];
            input[j] = check;
            j++;
        }
    }
	input[j] = '\0';
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
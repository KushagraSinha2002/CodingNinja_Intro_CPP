#include <iostream>
#include <cstring>
using namespace std;

void removeAllOccurrencesOfChar(char input[], char c) {

    int count=0;
    for(int i=0;i<=strlen(input);i++)
    {
        while(input[i]==c && i<strlen(input))
        {
           i++; 
        }
    input[count++]=input[i];
    }
}


int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    char c;
    cin >> c;
    removeAllOccurrencesOfChar(str, c);
    cout << str;
}
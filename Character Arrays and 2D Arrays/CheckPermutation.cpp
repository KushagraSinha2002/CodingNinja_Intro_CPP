#include <iostream>
#include <cstring>
using namespace std;

bool isPermutation(char input1[], char input2[]) {

    int l1=strlen(input1);
    int l2=strlen(input2);
    if(l1!=l2){
        return false;
    }
    int freq1[256]={0};
    int freq2[256]={0};

    for(int i=0;i<l1;i++){

        freq1[input1[i]]=  freq1[input1[i]]+1;

        freq2[input2[i]]=  freq2[input2[i]]+1;
    }
    for(int i=0;i<256;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}



int main() {
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}
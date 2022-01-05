#include<iostream>
using namespace std;

int main(){

    int m, n, sum;
    cin >> m >> n;

    int a[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    for(int j = 0; j < n; j++){
        sum = 0;
        for(int i = 0; i < m; i++){
            sum += a[i][j];
        }
        cout << sum << " ";
    }
}
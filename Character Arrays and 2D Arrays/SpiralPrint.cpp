#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int nCols)
{
    int count;
    int rStart = 0,rEnd = nRows - 1, cStart = 0, cEnd = nCols - 1;

    while(count != (nRows * nCols)){
        for(int i = cStart; i <= cEnd; i++){
            cout << input[rStart][i]<<" ";
            count++;
        }
        rStart++;
        
        for(int i = rStart ; i <= rEnd; i++){
            cout << input[i][cEnd]<<" ";
            count++;
        }
		cEnd--;
        
        for(int i = cEnd; i>= cStart; i--){
            cout << input[rEnd][i]<<" ";
            count++;
        }
        rEnd--;
        
        for(int i = rEnd; i >= rStart; i--){
            cout << input[i][cStart]<<" ";
            count++;
        }
        cStart++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}
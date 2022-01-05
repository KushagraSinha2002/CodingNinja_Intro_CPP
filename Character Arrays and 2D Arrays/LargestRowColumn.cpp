#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    int sumRows, sumCols, tempRow = 0, tempCol = 0, rowIndex, colIndex;
    
    if((nRows && mCols)==0) {
        cout<<"row"<<" "<<"0"<<" "<<"-2147483648";
    }
	else{
	    for (int i = 0; i < nRows; i++){
        	sumRows = 0;
    
			for (int j = 0; j < mCols; j++){
				sumRows += input[i][j];
			}
        	if(tempRow < sumRows){
            	tempRow = sumRows;
            	rowIndex = i;
        	}
		}
    	for (int j = 0; j < mCols; j++){
        	sumCols = 0;
    
			for (int i = 0; i < nRows; i++){
				sumCols += input[i][j];
			}
        	if(tempCol < sumCols){
            	tempCol = sumCols;
            	colIndex = j;
        	}
		}
    	if(tempRow >= tempCol){
        	cout << "row "  << rowIndex << " " << tempRow;
    	}
    	else{
        	cout << "column " << colIndex << " " << tempCol;
    	}        
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

		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		findLargest(input, row, col);
		cout << endl;
	}
}
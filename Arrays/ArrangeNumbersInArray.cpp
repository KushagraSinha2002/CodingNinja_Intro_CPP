#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int j = n-1;

    for (int i = 0; i < n/2; i++)
    {
        arr[i] = i+i+1;
        arr[j] = i+i+2;
        j--;
    }
    arr[n/2] = n;  
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int *arr = new int[n];
		arrange(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete [] arr;
	}

	
}
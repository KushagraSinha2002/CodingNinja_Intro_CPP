#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    int countZero;
    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
        {
            countZero++;
        }
    }
    for (int i = 0; i < countZero; i++)
    {
        input[i] = 0;
    }
    for (int i = countZero; i < size; i++)
    {
        input[i] = 1;
    }
}

int main()
{

	int t;
	cin >> t;

	while (t--)
	{
		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		sortZeroesAndOne(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}
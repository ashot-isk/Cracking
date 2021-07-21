#include <iostream>
using namespace std;

int **RotateMatrix(int **arr, int n)
{
	int x = n - 1;
	int y = n - 1;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n / 2; ++j)
		{
			swap(arr[i][j], arr[i][x - j]);
		}
	}

	for (int i = 0; i < x; ++i)
	{
		for (int j = 0; j < y; j++)
		{
			swap(arr[i][j], arr[x - j][y]);
		}
		--y;
	}

	return arr;
}
int main()
{
	const int n = 4;
	int k = 1;
	int **arr = new int *[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[n];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			arr[i][j] = k;
			++k;
		}
	}

	RotateMatrix(arr, n);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{

			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}
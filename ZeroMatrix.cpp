#include <iostream>
#include <vector>
using namespace std;

int **ZeroMatrix(int **arr, int colum, int row)
{
	vector<pair<int, int>> tmp;

	for (int i = 0; i < colum; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			if (arr[i][j] == 0)
			{
				tmp.push_back(make_pair(i, j));	
			}
		}
	}
	for (int k = 0; k < tmp.size(); ++k)
	{
		for (int i = 0; i < row; ++i)
		{
		       arr[tmp[k].first][i]=0;
		}
		for (int i = 0; i < colum; ++i)
		{
		       arr[i][tmp[k].second]=0;
		}

	}

	return arr;
}
int main()
{
	const int n =3 ;
	const int c = 4;
	int k = 1;
	int **arr = new int *[n];
	for (int i = 0; i < n; ++i)
	{
		arr[i] = new int[c];
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			arr[i][j] = k;
			++k;
			if (k == 9)
			{
				k = 0;
			}
		}
	}

	ZeroMatrix(arr, n, c);
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < c; ++j)
		{

			cout << arr[i][j] << "\t";
		}
		cout<<endl;
		cout << endl;
	}
}
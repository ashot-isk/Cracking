#include <iostream>
#include <string>
#include <bitset>
using namespace std;

bool isUnique(string a)
{
	if (a.length() > 256)
	{
		return false;
	}
	for (int i = 0; i < a.length(); ++i)
	{
		for (int j = 0; j < a.length(); ++j)
		{
			if (i == j)
			{
				++j;
			}
			if (a[i] == a[j])
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	string a;
	cin >> a;
	if (isUnique(a))
	{
		cout << " is Unique " << endl;
	}
	else
	{
		cout << " is not Unique " << endl;
	}
}

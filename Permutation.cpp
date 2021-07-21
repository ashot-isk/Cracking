#include <iostream>
#include <bitset>
#include <string>
using namespace std;

bool isPermutation(string str, string str1)
{
	bitset<256> a;
	bitset<256> b;
	for (int i = 0; i < str.length(); ++i)
	{
		
			a.set(str[i]);
			b.set(str1[i]);
		
	}

	if ((a ^ b) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{

	string str = "aab";
	string str1 = "acb";
	cout << isPermutation(str, str1) << endl;
}
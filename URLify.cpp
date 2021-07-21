#include <iostream>
#include <string>
using namespace std;

void URLify(string &str /*,int stringlenght*/)
{
	int count;
	int lenght;
	int i;
	string str1;
	for (i = 0; i < str.length(); ++i)
	{
		if (str[i] == ' ')
		{
			++count;
		}
	}
	cout << i << endl;

	lenght = (str.length() - count) + count * 3;
	//cout<< lenght;
	str.resize(lenght);
	for (int j = lenght; j >= 0; --j, --i)
	{
		if (str[i] == ' ')
		{

			str[j] = '0';
			--j;
			str[j] = '2';
			--j;
			str[j] = '%';
		}
		else
		{
			str[j] = str[i];
		}
	}
}
int main()
{
	string str = "hello ba inch ay axper";

	URLify(str);
	cout << str << endl;
	cout << str.length();
}
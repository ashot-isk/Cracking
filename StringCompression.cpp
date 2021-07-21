#include <iostream>
#include <string>
using namespace std;

string StringCompression(string &str)
{
	string tmp = str;
	int count = 1;
	//tmp+=str[0];
	//cout<<tmp;
	char kay = str[0];

	for (int i = 1; i <= str.length(); ++i)
	{

		if (kay == str[i])
		{
			str.erase(i, 1);
			--i;
			count++;
		}
		else
		{
			string a = to_string(count);
			str.insert(i, a);
			++i;
			kay = str[i];
			count = 1;
		}
	}
	if(str.length()==tmp.length())
	{
		return tmp;
	}else
	{
		if(str.length()<tmp.length())
		{
			return str;
		}
		else
		{
			return tmp;
		}
	}

	return str;
}
int main()
{
	string a = "aabbc";
	cout << StringCompression(a);
}
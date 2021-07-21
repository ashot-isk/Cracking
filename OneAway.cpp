#include <iostream>
#include <string>
#include <bitset>

bool OneAway(std::string str1, std::string str2)
{
	int calc = 0;
	std::bitset<256> a;

	int count = 0;
	for (int i = 0; i < str1.length(); ++i)
	{
		a.set(str1[i]);
	}

	for (int i = 0; i < str2.length(); ++i)
	{
		if (a[str2[i]] == 1)
		{
			a.set(str2[i], 0);
		}
		else
		{
			a.set(str2[i]);
		}
	}

	for (int i = 0; i < 256; ++i)
	{
		if (a[i] == 1)
		{
			count++;
		}
	}
	if (a == 0)
	{
		return true;
	}

	if (count == 1 && (str1.length() + str2.length()) % 2 == 1)
	{
		return true;
	}
	if(count == 2 && str1.length()==str2.length())
	{
		return true;
	}
	else{
		return false;
	}
	
}

int main()
{
	std::string s = "pale";
	std::string s2 = "paled";
	std::cout << OneAway(s, s2)<<std::endl;
}
#include <iostream>
#include <string>
#include <bitset>

bool Palidrom_perutation(std::string str)
{
	int calc = 0;
	std::bitset<256> a;
	
	int count = 0;
	a.set(str[0]);
	for (int i = 1; i < str.length(); ++i)
	{  
		if (str[i] == ' ')
		{
			calc++;
			++i;
		}
		if (a[str[i]] == 1)
		{
			a.set(str[i], 0);
		}
		else
		{
			a.set(str[i]);
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

	if (count == 1 && (str.length() - calc) % 2 == 1)
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
	std::string str{"tact coa"};
	std::cout << Palidrom_perutation(str);
}
#include <iostream>
#include <map>

int main()
{
	std::string s;
	std::string t;

	std::cout << "s : ";
	std::cin >> s;

	std::cout << "t : ";
	std::cin >> t;

	std::map<char, int> map1;

	for (int i = 97; i < 123; i++)
	{
		int count = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (s[j] == i)
			{
				++count;
			}
		}

		map1.insert({ i, count });
	}


	for (int i = 0; i < t.size(); i++)
	{
		--map1[t[i]];
	}

	for (int i = 97; i < 123; i++)
	{
		if (map1[i] != 0)
		{
			std::cout << "false";
			return 0;
		}
	}

	std::cout << "true";
}
#include <iostream>
#include <map>

char findTheDifference(std::string s, std::string t)
{
	std::map <char, int> map1;

	for (int i = 97; i < 123; i++)
	{
		int count = 0;
		for (int j = 0; j < s.size(); j++)
		{
			if (i == s[j])
			{
				++count;
			}
		}

		map1.insert({ i, count });
	}

	char ans;
	for (int i = 97; i < 123; i++)
	{
		int count = 0;

		for (int j = 0; j < t.size(); j++)
		{
			if ((char)i == t[j])
			{
				++count;
			}
		}		
		if (count != map1[i])
		{
			ans = i;
			break;
		}
	}

	return ans;
}

int main()
{
	std::string s;
	std::string t;

	std::cout << "Input s :";
	std::cin >> s;

	std::cout << "Input t :";
	std::cin >> t;

	std::cout << findTheDifference(s, t);
}
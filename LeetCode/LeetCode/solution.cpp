#include <iostream>

std::string mergeAlternately(std::string word1, std::string word2) 
{
	int count = std::max(word1.size(), word2.size());

	std::string ans;

	for (int i = 0; i < count; i++)
	{
		if (word1.size() > i)
		{
			ans += word1[i];
		}

		if (word2.size() > i)
		{
			ans += word2[i];
		}
	}

	return ans;
}

int main()
{
	std::string word1;
	std::string word2;

	std::cout << "Word 1 : ";
	std::cin >> word1;

	std::cout << "Word 2 : ";
	std::cin >> word2;

	std::cout << "answer : " << mergeAlternately(word1, word2);
}
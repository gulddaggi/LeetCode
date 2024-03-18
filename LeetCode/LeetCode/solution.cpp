#include <iostream>
#include <vector>
#include <string>

int main()
{
	std::vector<std::string> ops;

	std::cout << "input : ";
	while (true)
	{
		std::string s;
		std::cin >> s;
		if (s == "end")
		{
			break;
		}
		else
		{
			ops.push_back(s);
		}
	}

	std::cout << "ops = ";
	for (int i = 0; i < ops.size(); i++)
	{
		std::cout << ops[i] << ", ";
	}
	std::cout << '\n';

	int score = 0;
	std::vector<int> scores;
	for (int i = 0; i < ops.size(); i++)
	{
		std::string cur = ops[i];
		if (cur == "+")
		{
			int a = scores.back();
			int b = scores[scores.size() - 2];
			int tmp = a + b;
			scores.push_back(tmp);
			score += tmp;
		}
		else if (cur == "D")
		{
			int tmp = scores.back() * 2;
			scores.push_back(tmp);
			score += tmp;
		}
		else if (cur == "C")
		{
			score -= scores.back();
			scores.pop_back();
		}
		else 
		{
			int tmp = std::stoi(ops[i]);
			scores.push_back(tmp);
			score += tmp;
		}

		std::cout << "scores = ";
		for (int i = 0; i < scores.size(); i++)
		{
			std::cout << scores[i] << ", ";
		}
		std::cout << '\n';
	}

	std::cout << "score : " << score;
}